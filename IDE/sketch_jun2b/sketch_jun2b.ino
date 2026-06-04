void setup() 
{
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<=255;i=i+5)
  {
    analogWrite(3,HIGH);
    delay(30);
  }
  
  for(i=255;i>=0;i=i-5)
  {
    analogWrite(3,LOW);
    delay(30);
  }

}
