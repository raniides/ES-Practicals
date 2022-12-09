// Sketch to display numbers from '0' to '9' using a
//seven segment LED
//Common anode to 5v(vcc)
//LOW means ON and HIGH means OFF
#define segA 8 // Connect Segment A to pin number 2
#define segB 9 // Connect Segment B to pin number 3
#define segC 5
#define segD 4
#define segE 3
#define segF 7
#define segG 6 // Connect segment G to pin number 8

void setup() {
 pinMode(segA,OUTPUT); //Configure all 7 pins from 2 to 8 as output
 pinMode(segB,OUTPUT);
 pinMode(segC,OUTPUT);
 pinMode(segD,OUTPUT);
 pinMode(segE,OUTPUT);
 pinMode(segF,OUTPUT);
 pinMode(segG,OUTPUT);
// pinMode(segDP,OUTPUT);
}
void loop() {
 // Code to display '0'
 digitalWrite(segA,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segE,LOW);
 digitalWrite(segF,LOW);
 digitalWrite(segG,HIGH);
 delay(1000);
 
// Code to display '1'
 digitalWrite(segA,HIGH);
 digitalWrite(segB,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,HIGH);
 delay(1000);

// Code to display '2'
 digitalWrite(segA,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,LOW);
 digitalWrite(segE,LOW);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,LOW);
 delay(1000);

// Code to display '3'
 digitalWrite(segA,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,LOW);
 
 delay(1000);
// Code to display '4'
 digitalWrite(segA,HIGH);
 digitalWrite(segB,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,LOW);
 digitalWrite(segG,LOW);
 delay(1000);

// Code to display '5'
 digitalWrite(segA,LOW);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,LOW);
 digitalWrite(segG,LOW);
 delay(1000);

// Code to display '6'
 digitalWrite(segA,LOW);
 digitalWrite(segB,HIGH);
  digitalWrite(segC,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segE,LOW);
 digitalWrite(segF,LOW);
 digitalWrite(segG,LOW);
 delay(1000);

// Code to display '7'
 digitalWrite(segA,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,HIGH);
 delay(1000);

// Code to display '8'
 digitalWrite(segA,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segE,LOW);
 digitalWrite(segF,LOW);
 digitalWrite(segG,LOW);
 delay(1000);

// Code to display '9'
 digitalWrite(segA,LOW);
 digitalWrite(segB,LOW);
 digitalWrite(segC,LOW);
 digitalWrite(segD,LOW);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,LOW);
 digitalWrite(segG,LOW);
 delay(1000);
}
