#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//#define pot A0
#define BUZZER_PIN 3

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();         // initialize the lcd
  lcd.backlight();    // Turn on the LCD screen backlight

  // pinMode(pot,INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  //pinMode(A0, INPUT); // MQ-6 A0 Pin
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(11,OUTPUT); // LED Green
  pinMode(12,OUTPUT); // LED Red
}

void loop()
{

  int sensorValue = analogRead(A3);
  Serial.println(sensorValue);

  lcd.setCursor(0,0);
  lcd.print("GAS VAL:");

  lcd.setCursor(9,0);
  lcd.print(sensorValue);


 if (sensorValue > 500)
 {

    lcd.setCursor(0,1);
    lcd.print("  LPG Detected    ");
    analogWrite(BUZZER_PIN, 50);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
  }
  else
 {
     lcd.setCursor(0,1);
     lcd.print("LPG Not Detected    ");
     analogWrite(BUZZER_PIN, 0);
     digitalWrite(12,LOW);
     digitalWrite(11,HIGH);
  }
  
  delay(1000); 
}
