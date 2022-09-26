vvoid setup()
{
pinMode(12, OUTPUT); //for pir sensor o/p buzzer
pinMode(8, OUTPUT); //for temp sensor o/p buzzer
pinMode(4, INPUT); //feeding i/p to arduino from pir sensor
Serial.begin(9600);
pinMode(13, OUTPUT);
}
void loop()
{
//pir sensor
int p=digitalRead(4);
delay(20);
if(p)
{
tone(12,800);//if motion detetcted the buzzer will rung
delay(500);
noTone(12);
delay(100);
}
//temp sensor
double t=analogRead(A0);
double e=(((t/1024)*5)-0.5)*100;
Serial.println(e);
delay(200);
if(e>25)
{
tone(8,9000);//if temperature greater than 50 deg the buzzer will rung
delay(500);
noTone(8);
delay(100);
}
}
