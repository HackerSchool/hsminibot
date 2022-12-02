// Motor 1
const int motorPin1 = 9; // amarelo
const int motorPin2 = 8; // amarelo
// Motor 2
const int motorPin3 = 7; // vermelho
const int motorPin4 = 6; // branco
int speed = 255;

const int PhotoIn = 2;
int State = 0;

void setup()
{
  Serial.begin(9600);
  // Set pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(PhotoIn, INPUT);

  // Motor Control A in both directions
}

void loop()
{

  State = analogRead(PhotoIn);
  Serial.print(State);
  Serial.print("\n");
  delay(1000);

  analogWrite(motorPin1, speed);
  delay(120);
  analogWrite(motorPin1, 0);
  delay(100);
  //analogWrite(motorPin2, speed);
  //delay(250);
  //analogWrite(motorPin2, 0);
  //analogWrite(motorPin3, speed);
  //delay(250);
  //analogWrite(motorPin3, 0);
  //delay(100);
  analogWrite(motorPin4, speed);
  delay(120);
  analogWrite(motorPin4, 0);
  delay(100);
}
