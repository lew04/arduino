int trigPin=12;
int echoPin=13;
long duration;
int distance;
int buzzerPin=2;
void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
   pinMode(buzzerPin,OUTPUT);
}
void loop() {
  noTone(buzzerPin);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
   digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
   digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
  if (distance>=40){
  tone(buzzerPin,10000);
  delay(100);}
}
