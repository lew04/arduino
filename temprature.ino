int tempSensorPin=A0;
int buzzerPin=9;
float tempratureThreshold=15.0;
void setup() 
{
  Serial.begin(9600);
  pinMode(buzzerPin,OUTPUT);
  digitalWrite(buzzerPin,LOW);

}

void loop() {
  int sensorvalue=analogRead(tempSensorPin);
  float temprature=sensorvalue*(3.0/1023)*10;
  Serial.print("Temprature:");
  Serial.print(temprature);
  Serial.println("*C");
  if(temprature>=tempratureThreshold)
  {
    digitalWrite(buzzerPin,HIGH);
  }
    else
   {
    digitalWrite(buzzerPin,LOW);
     
   }
  delay(1000);

}
