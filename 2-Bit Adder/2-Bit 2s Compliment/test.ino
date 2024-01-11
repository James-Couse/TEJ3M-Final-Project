// Created on: Jan 2024
// Created by: James Couse
// Created for: This is the code for a 2-bit adder


const int DIGIT_A1 = 13;
const int DIGIT_B1 = 12;
const int DIGIT_A2 = 7;
const int DIGIT_B2 = 8;

int Ap = 0;
int Bp = 0;
int An = 0;
int Bn = 0;

void setup()
{
  // setup serial output
  Serial.begin(9600);
  // set pin mode to output
  pinMode(DIGIT_A1, OUTPUT);
  pinMode(DIGIT_B1, OUTPUT);
  pinMode(DIGIT_A2, OUTPUT);
  pinMode(DIGIT_B2, OUTPUT);
  
  // set all pins to "0)
  digitalWrite(DIGIT_A1, 0); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, 0);
  digitalWrite(DIGIT_A2, 0);
  digitalWrite(DIGIT_B2, 0);
  
  // loop over the inputs
  Serial.print("Starting ... \n\n");
  delay(1000); // Wait for 1000 millisecond(s)

  int onesA = 0;
  int twosA = 0;
  int onesB = 0;
  int twosB = 0;
onesA = 1;
twosA = 0;
onesB = 1;
twosB = 1;

  digitalWrite(DIGIT_A1, onesA); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, onesB);
  digitalWrite(DIGIT_A2, twosA);
  digitalWrite(DIGIT_B2, twosB);
          Ap = ((twosA * 10) + (onesA));
          Bp = ((twosB * 10) + (onesB));

          //Converting A
          if (Ap == 00){
            An = 0;
          }
          else if (Ap == 01){
            An = 1;
          }
          else if (Ap == 10){
            An = -2;
          }
          else if (Ap == 11){
            An = -1;
          }
          // Converting B
          if (Bp == 00){
            Bn = 0;
          }
          else if (Bp == 01){
            Bn = 1;
          }
          else if (Bp == 10){
            Bn = -2;
          }
          else if (Bp == 11){
            Bn = -1;
          }
          Serial.print("A = " + String(twosA) + String(onesA) + "\n");
          Serial.print("B = " + String(twosB) + String(onesB) + "\n");
          Serial.print(
          String(An) 
          + " + " 
          + String(Bn) 
          + " = " 
          + String(An + Bn) + "\n\n");
          delay(4000);

}
void loop() {
  // Done
  Serial.print("\nDone. \n");
  delay(100000000); // Wait for 10000 millisecond(s)
}
