int buzzerPin=9;
void setup()
{
  pinMode(buzzerPin,OUTPUT);
}
void loop()
{
  tone(buzzerPin,500);
  delay(1000);
  noTone(buzzerPin);
    delay(1000);
  
  tone(buzzerPin,30000);
  delay(1000);
  noTone(buzzerPin);
    delay(1000);
  tone(buzzerPin,2000);
  delay(1000);
  noTone(buzzerPin);
    delay(1000);
}
