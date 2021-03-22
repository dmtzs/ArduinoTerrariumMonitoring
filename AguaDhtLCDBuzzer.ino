#include <DHT.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define DHT_PIN 7
#define DHTTYPE DHT22
const int pinBuzzer= 9;//Constante del buzzer conectado.
int BandBoton= 0;//Variables globales, se pueden usar para hacer referencia a un pin o como variable global
int adc_id= 0;

DHT dht(DHT_PIN, DHTTYPE);


void setup()
{
  lcd.begin(16, 2 );
  dht.begin();
  Serial.begin(9600);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  float h= dht.readHumidity();
  float t= dht.readTemperature();
  int valor= analogRead(adc_id);
  int EstadoBoton= digitalRead(8);
  
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(h);
  lcd.print("%");

  if(EstadoBoton==HIGH)
  {
    BandBoton= 1;
  }

  if(valor<518 && BandBoton==0)
  {
    digitalWrite(pinBuzzer, HIGH);//Se enciende buzzer
  }
  else if(valor<518 && BandBoton==1)
  {
    digitalWrite(pinBuzzer, LOW);//Se apaga el buzzer
  }
  else if(valor>518)
  {
    BandBoton=0;
    digitalWrite(pinBuzzer, LOW);//Se apaga el buzzer
  }
  Serial.print(BandBoton);
  delay(3000);//Para el sensor de temperatura y humedad, pero de igual manera afecta al de agua.
}
