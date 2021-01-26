#include <DHT.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define DHT_PIN 7
#define Grove_Water_Sensor 8
#define DHTTYPE DHT22
const int pinBuzzer= 9;//Constante del buzzer conectado.
int adc_id= 0;

DHT dht(DHT_PIN, DHTTYPE);


void setup()
{
  lcd.begin(16, 2 );
  dht.begin();
  Serial.begin(9600);
  pinMode(pinBuzzer, OUTPUT);
}

void loop()
{
  float h= dht.readHumidity();
  float t= dht.readTemperature();
  int valor= analogRead(adc_id);
  
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(h);
  lcd.print("%");
  delay(3000);

  if(valor<25)
  {
    digitalWrite(pinBuzzer, HIGH);//Se enciende buzzer
  }
  else
  {
    digitalWrite(pinBuzzer, LOW);//Se apaga el buzzer
  }
}
