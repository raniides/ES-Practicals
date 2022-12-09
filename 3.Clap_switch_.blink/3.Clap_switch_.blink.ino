const int LED=11;
const int sound=A2;
const int threshold=60;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED,OUTPUT);
pinMode(sound,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int soundsens=analogRead(sound);
if(soundsens>=threshold)
{
  digitalWrite(LED,HIGH);
  Serial.print("Sound intensity:");
  Serial.print(soundsens);
  Serial.print(" ");
  delay(1000);
}
else
{
  digitalWrite(LED,LOW);
}
}
