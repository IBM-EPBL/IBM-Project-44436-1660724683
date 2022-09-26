int trigpin=4;
int echopin=3;
int buzzerpin=10;
int time;
int distance;
void setup()
{
 pinMode(8,OUTPUT);
 pinMode(3,INPUT);
 pinMode(4,OUTPUT);
 pinMode(10,OUTPUT);
 Serial.begin(9600);
}
void loop()
{
 digitalWrite(trigpin, HIGH);
 delayMicroseconds(1000);
 digitalWrite(trigpin, LOW);
 delayMicroseconds(1000);
 time=pulseIn(echopin,HIGH);
 distance=(time*0.034)/2;
 if(distance<=10)
 {
 Serial.print("Distance= ");
 Serial.println(distance);
 digitalWrite(8,HIGH);
 delay(1000);
 digitalWrite(10,LOW);
 delay(1000);
 }
 else
 {
 Serial.print("Distance= ");
 Serial.println(distance);
 digitalWrite(8,LOW);
 delay(1000);
 digitalWrite(10,HIGH);
 delay(1000);
 }

}
