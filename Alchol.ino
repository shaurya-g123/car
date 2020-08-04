int MQ = A5;//connect mq sensor to analog pin 5
int buzz= 2;//connect Buzzer sensor to digital pin 2
int sensorThreshold=400;//maximum value

void setup() {
  pinMode(MQ,INPUT);// Mq sensor is taking input
  pinMode(buzz,OUTPUT);//Buzzer is giving output
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(MQ);//defining mq as analog read

  Serial.print("Pin A5: ");//command for mq print on monitor
  Serial.println(analogSensor);//command for mq print on monitor
  if (analogSensor > sensorThreshold)
  {
    digitalWrite(buzz,HIGH);
  }
  else
  {
   digitalWrite(buzz,LOW);
  }
  delay(1000);//comand for time of 1second
}
