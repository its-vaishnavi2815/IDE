// ---------------------------------------------------------------------------
// Example NewPing library sketch that does a ping about 20 times per second.
// ---------------------------------------------------------------------------

#include <NewPing.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 400 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() 
{
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}
void loop() 
{
  // put your main code here, to run repeatedly:                     // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  int i=sonar.ping_cm(); // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  delay(10);
  int data;
  data=analogRead(A0);
  Serial.println(data);
  if(data>600 && i<10)
  {
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }
}



