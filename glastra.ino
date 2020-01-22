//L293D
//Motor A
const int motorPin1  = 5;  // Pin 14 of L293
const int motorPin2  = 6;  // Pin 10 of L293
//Motor B
const int motorPin3  = 10; // Pin  7 of L293
const int motorPin4  = 9;  // Pin  2 of L293

int sensorPin = A0;

int sensorValue = 0;
int tolerance = 40;


//This will run only one time.
void setup(){
 
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
    
    //Motor Control - Motor A: motorPin1,motorpin2 & Motor B: motorpin3,motorpin4

    
    //And this code will stop motors
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
  
}


void loop()
{
  
 sensorValue = analogRead(sensorPin);   

 
 
  if ( ( sensorValue <  (512-tolerance) and sensorValue > tolerance)  )
  {     
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
  }
  else
  {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
  }
  delay(200);
}
