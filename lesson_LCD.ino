#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // 設定 LCD I2C 位址

void setup(void)
{
  lcd.begin(16, 2);  // 設定LCD有2列16欄      
  lcd.backlight();
}

void loop(void)
{
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Hello World");
delay(1000);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("temperature");
lcd.setCursor(0, 1);
lcd.print("C");    
delay(1000); 
}
