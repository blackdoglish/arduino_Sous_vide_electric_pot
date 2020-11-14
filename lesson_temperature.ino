#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // 設定 LCD I2C 位址
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(void)
{
  lcd.begin(16, 2);  // 設定LCD有2列16欄      
  lcd.backlight();
  sensors.begin();
}

void loop(void)
{
float temperature;
sensors.requestTemperatures();

lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Hello World");
delay(1000);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("temperature");
lcd.setCursor(0, 1);
lcd.print(sensors.getTempCByIndex(0));
lcd.print("C");    
delay(1000); 
}
