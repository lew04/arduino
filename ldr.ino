int ldr=A0;
int led=13;
int threshold=500;
void setup() 
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
 }

void loop() {
  int ldrvalue=analogRead(ldr);
  Serial.print("LDR value=");
  Serial.print(ldrvalue);
  if(ldrvalue>=threshold)
  {
    digitalWrite(led,HIGH);
    
  }
  else
  {
    digitalWrite(led,LOW);
  }
  // put your main code here, to run repeatedly:

}
