#include<Wire.h> // using wire library 
#include<LiquidCrystal_I2C.h>// using liquid crystal i2c library 
LiquidCrystal_I2C  lcd(0x27,20,4);// address of LCD 
void setup()
{
  lcd.begin(16,2);// initializing the LCD 
  Serial.begin(9600);// starts serial communication at the baud rate of 9600
  lcd.init();
  lcd.init();
  lcd.backlight();//turn on backlight of display 
  
  lcd.setCursor(0,0);//Selecting forst rows' first comlumn to write 
  
  lcd.print(" Wellcome to ");//print welcome to screen at the top left corner defined in line 12
  
  lcd.setCursor(0,1);//We want to write TECH GUIDE a the from the first column of the second row 
  
  lcd.print(" TECH GUIDE ");//prints TECH GUIDE on the LCD display 
  
}
void loop()
{
  // We don't need to write anything here as we do not want any looping 
}
