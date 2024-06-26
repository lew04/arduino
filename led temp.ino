int tempSensorPin=A0;
int led=5;
int led2=6;
int led3=7;
float tempratureThreshold1=2.0;
float tempratureThreshold2=4.0;
float tempratureThreshold3=6.0;
void setup() 
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
 
}

void loop() {
  int sensorvalue=analogRead(tempSensorPin);
  float temprature=sensorvalue*(3.0/1023)*10;
  Serial.print("Temprature:");
  Serial.print(temprature);
  Serial.println("*C");
  if(temprature>=tempratureThreshold1)
  {
    digitalWrite(led,HIGH);
  }
    else 
   {
      digitalWrite(led,LOW);
  }
  
  if(temprature>=tempratureThreshold2)
  {
     digitalWrite(led2,HIGH);
  }
   
  else
  {
     digitalWrite(led2,LOW);
  }
    
    if(temprature>=tempratureThreshold3)
  {
     digitalWrite(led3,HIGH);
    }
   
  else
  {
     digitalWrite(led3,LOW);
  }
  delay(1000);

}
  
