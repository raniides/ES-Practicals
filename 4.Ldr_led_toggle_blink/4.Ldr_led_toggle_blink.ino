int ldr=A0;//Set A0(Analog Input) for LDR.
int value=0;

void setup() {
Serial.begin(9600);
pinMode(8,OUTPUT);
}

void loop() {
value=analogRead(ldr);//Reads the Value of LDR(light).
Serial.println("LDR value is :");//Prints the value of LDR to Serial Monitor.
Serial.println(value);
if(value<300 )
  {
    digitalWrite(8,HIGH);//Makes the LED glow in Dark.
  }
  else
  {
    digitalWrite(8,LOW);//Turns the LED OFF in Light.
  }
}
