int trigger=7; 
int echo=6;//”trigger” on pin 7.        //”echo” on pin 6.       //The value “time” will save the time between transmission                   //and reception of the soundwave. 
long dist=0;  
long time=0;//The value “dist” will save the calculated distance. It will         //start with “0”. Instead of “int” we are using “long” for this 
       //value, to save a bigger number. 
//#define LED 11
void setup() 
{
Serial.begin (9600);    //Starting the serial communication. It will send the         //data from the arduino board to the computer to show it on the         //serial monitor. pinMode(trigger, OUTPUT);   //”trigger” (Pin 7) is an output. 
 //”echo” (Pin 6) is an input.
pinMode(trigger,OUTPUT);
pinMode(echo, INPUT);
} 
void loop() { 
 digitalWrite(trigger, LOW);   //Low voltage on the trigger pin to produce a //clear signal.
delay(5);       //for 5 milliseconds. 
digitalWrite(trigger, HIGH);  //Creating the soundwave. 
delay(10); //..for 10 milliseconds.
digitalWrite(trigger, LOW);   //Stop creating the soundwave.
time = pulseIn(echo, HIGH);   //With the command pulseIn (Capital “i” in the //front of the “n”)          
                              //the arduino board measures the time between sending and                               //receiving the soundwave.
dist = (time/2) * 0.034;   //This calculation transforms the measured time into         //the distance in centimeter. (The sound needs 29.1 milli seconds for                 //one centimeter. //The time gets divided with two, because we                  //only want to get one distance and //not the two ways that the                 //soundwave has to take). 
if (dist >= 500 || dist <= 0)   //If the distance gets over 500cm OR under 0cm,         //the measurement is no longer accurate. 
{ 
Serial.println("No measurement"); //So the serial monitor displays “No measurement” 
} else        //otherwise 
{ Serial.print(dist);      //The calculated distance is shown on the serial monitor. 
Serial.println("cm"); 
  Serial.println(" ");
 //This command causes a short break between the measurements. 
delay(1000);
}}

 
