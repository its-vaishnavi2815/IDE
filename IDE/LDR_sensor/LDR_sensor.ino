void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data;
  data=analogRead(A0);
  Serial.println(data);
  delay(10);
  if(data>800)
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
  }
  else
  {
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
  }
}
