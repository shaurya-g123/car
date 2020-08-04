#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial mySerial(10, 11); // RX, TX
Servo myServo;  //servo on pin 9
int ledRed = 8;
int dir;

void setup()  
{
  Serial.begin(9600);
  Serial.println("RFID Reader Start:");
  mySerial.begin(9600);
  pinMode(ledRed, OUTPUT);
  myServo.attach(9);
}

void loop() 
{
  myServo.write(1);
  digitalWrite(ledRed, HIGH);
  if (mySerial.available())
  {
    Serial.write(mySerial.read());
    digitalWrite(ledRed, LOW);
    myServo.write(170);
  } 
  delay(500);
}
