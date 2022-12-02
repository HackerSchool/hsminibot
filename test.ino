 // Motor 2
const int motorPin3 = 6; 
const int motorPin4 = 4; 

void setup() {
  // put your setup code here, to run once:
   //Serial.begin(9600);
  // Set pins as outputs
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, INPUT);
  //pinMode(PhotoIn, INPUT);

  // Motor Control A in both directions
}

void loop() {
  digitalWrite(motorPin3, HIGH);
  
  // put your main code here, to run repeatedly:

}
