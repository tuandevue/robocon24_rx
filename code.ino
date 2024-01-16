/*
 * cổng kết nối rx
 * CSN - tự set
 * CE  - tự set
 * SCK = 13
 * MOSI = 11
 * MISO = 12
 */
#include <avr/interrupt.h>
#include <RF24.h>
#include <nRF24L01.h>
#include <SPI.h>

#include "khaibaobien.h"
#include <EEPROM.h>
#include <Servo.h>
#include <avr/wdt.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
RF24 radio(9, 10); // CE-CSN
const byte diachi[6] = "123456";

void setup() 
{
  lcd.init();                    
  lcd.backlight();// bật đèn LCD



  if(!radio.begin());
  {
    Serial.println("Không thể khởi động");
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Khong the khoi dong");
    while(1){}
  }

  radio.openWritingPipe(1, diachi); //mở đường truyền địa chỉ 123456
  radio.setPALevel(RF24_PA_MIN);// khuếch đại công suất
  radio.setChannel(99);
  radio.setDataRate(RF24_2MBPS); // các mức 250 KBPS 1mbps và 2mbps
  radio.startListening(); cài đặt module là rx
}

void loop() 
{
  

}
