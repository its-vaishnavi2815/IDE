
  void setup() 
{
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int data;
  data=analogRead(A0);
  Serial.println(data);
  delay(10);
 
  if(data>600)
  {
    tone(7,100);
  }
  else
  {
    noTone(7);
  }

}

