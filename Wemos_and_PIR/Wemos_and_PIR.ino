/*
 PIR

 Turns on and off a LED on an Arduino or in my case the ESP9266 Wemos D1 Mini

 */


// constants won't change. They're used here to set pin numbers:
const int pirPin = D2;              // the number of the PIR pin
const int ledPin = D4;     // the number of the LED pin

// variables will change:
int motion = LOW;



void setup()
{
Serial.begin(9600);     //To define serial speed

// initialize the LED pin as an output:
pinMode(ledPin, OUTPUT);
// initialize the pushbutton pin as an input:
pinMode(pirPin, INPUT);
}
 
void loop()
{
motion = digitalRead(pirPin);

//low = no motion, high = motion
if (motion == LOW)
{
  Serial.println("No motion");
  // turn LED on:
  digitalWrite(ledPin, LOW);
}
else
{
  Serial.println("Motion detected ALARM");
  // turn LED off:
  digitalWrite(ledPin, HIGH);
  // time of signal:
  Serial.println("Send signal for 5 seconds");
  delay(5000);
  
}
 
delay(1000);
}
