/* This is a verified code for interfacing 16*2 i2c lcd display with ESP8266(Nodemcu)
 *  Connections of  
 *   LCD             ESP8266
 *   VCC      -->    Vin
 *   GND      -->    GND
 *   SDA      -->    D2
 *   SCL      -->    D1
 *   
 *   
 *   For any reference go to https://youtu.be/Hu9hXhJ-9gA
 */ 
 

#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);



void setup() {
  // put your setup code here, to run once:
//  Wire.begin(2,0);
  lcd.begin(16, 2);
  lcd.init();
  lcd.backlight();

  
//  lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(1,4);
  lcd.print("Hello World");
  delay(1000);

  lcd.setCursor(2,0);
  lcd.print("Welcome to world");
  delay(800);
}
