

#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8



void setup() {
  // put your setup code here, to run once:
pinMode(segA,OUTPUT);
pinMode(segB,OUTPUT);
pinMode(segC,OUTPUT);
pinMode(segD,OUTPUT);
pinMode(segE,OUTPUT);
pinMode(segF,OUTPUT);
pinMode(segG,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//CODE TO DISPLAY'0'
digitalWrite(segA,HIGH);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,HIGH);
digitalWrite(segF,HIGH);
digitalWrite(segG,LOW);
delay(4000);

//CODE TO DISPLAY'1'
digitalWrite(segA,LOW);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,LOW);
digitalWrite(segE,LOW);
digitalWrite(segF,LOW);
digitalWrite(segG,LOW);
delay(4000);

//CODE TO DISPLAY'2'
digitalWrite(segA,HIGH);
digitalWrite(segB,HIGH);
digitalWrite(segC,LOW);
digitalWrite(segD,HIGH);
digitalWrite(segE,HIGH);
digitalWrite(segF,LOW);
digitalWrite(segG,HIGH);
delay(4000);

//CODE TO DISPLy'3'
digitalWrite(segA,HIGH);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,LOW);
digitalWrite(segF,LOW);
digitalWrite(segG,HIGH);
delay(4000);

//CODE TO DISPLAY'4'
digitalWrite(segA,LOW);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,LOW);
digitalWrite(segE,LOW);
digitalWrite(segF,HIGH);
digitalWrite(segG,HIGH);
delay(4000);

//CODE TO DISPLAY'5'
digitalWrite(segA,HIGH);
digitalWrite(segB,LOW);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,LOW);
digitalWrite(segF,HIGH);
digitalWrite(segG,HIGH);
delay(4000);

//CODE TO DIS[PLAY'6'
digitalWrite(segA,HIGH);
digitalWrite(segB,LOW);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,HIGH);
digitalWrite(segF,HIGH);
digitalWrite(segG,HIGH);
delay(4000);

//CODE TO DISPLAY'7'
digitalWrite(segA,HIGH);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,LOW);
digitalWrite(segE,LOW);
digitalWrite(segF,LOW);
digitalWrite(segG,LOW);
delay(4000);

//CODE TO DISPLAY'8'
digitalWrite(segA,HIGH);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,HIGH);
digitalWrite(segF,HIGH);
digitalWrite(segG,HIGH);
delay(4000);


//CODE TO DISPLAY'9'
digitalWrite(segA,HIGH);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,LOW);
digitalWrite(segF,HIGH);
digitalWrite(segG,HIGH);
delay(4000);

}
