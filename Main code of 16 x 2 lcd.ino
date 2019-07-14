#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C  lcd(0x27,20,4);
void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.init();
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0,0);
  
  lcd.print(" Wellcome to ");
  
  lcd.setCursor(0,1);
  
  lcd.print(" TECH GUIDE ");
  
}
void loop()
{
  
}
