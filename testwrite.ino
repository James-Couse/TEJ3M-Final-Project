const int DIGIT_A1 = 13;
const int DIGIT_B1 = 12;
const int DIGIT_A2 = 10;
const int DIGIT_B2 = 9;
const int DIGIT_A3 = 7;
const int DIGIT_B3 = 6;
const int DIGIT_A4 = 4;
const int DIGIT_B4 = 3;
const int ADD_SUB = 2;

int Ap = 0;
int Bp = 0;
int An = 0;
int Bn = 0;
int Total = 0;

void setup()
{
  // setup serial output
  Serial.begin(9600);
  // set pin mode to output
  pinMode(DIGIT_A1, OUTPUT);
  pinMode(DIGIT_B1, OUTPUT);
  pinMode(DIGIT_A2, OUTPUT);
  pinMode(DIGIT_B2, OUTPUT);
  pinMode(DIGIT_A3, OUTPUT);
  pinMode(DIGIT_B3, OUTPUT);
  pinMode(DIGIT_A4, OUTPUT);
  pinMode(DIGIT_B4, OUTPUT);
  pinMode(ADD_SUB, OUTPUT);
  
  
  // set all pins to "0)
  digitalWrite(DIGIT_A1, 0); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, 1);
  digitalWrite(DIGIT_A2, 0);
  digitalWrite(DIGIT_B2, 1);
  digitalWrite(DIGIT_A3, 0);
  digitalWrite(DIGIT_B3, 1);
  digitalWrite(DIGIT_A4, 1);
  digitalWrite(DIGIT_B4, 0);
  digitalWrite(ADD_SUB, 0);
}
void loop() {
  // Done
  Serial.print("\nDone. \n");
  delay(100000000); // Wait for 10000 millisecond(s)
}