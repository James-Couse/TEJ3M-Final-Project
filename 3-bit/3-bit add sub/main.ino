// Created on: Jan 2024
// Created by: James Couse
// Created for: This is the code for a 2-bit adder

const int DIGIT_A1 = 13;
const int DIGIT_B1 = 12;
const int DIGIT_A2 = 10;
const int DIGIT_B2 = 9;
const int DIGIT_A3 = 7;
const int DIGIT_B3 = 6;
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
  
  

  // set all pins to "0)
  digitalWrite(DIGIT_A1, 0); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, 0);
  digitalWrite(DIGIT_A2, 0);
  digitalWrite(DIGIT_B2, 0);
  digitalWrite(DIGIT_A3, 0);
  digitalWrite(DIGIT_B3, 0);
  digitalWrite(ADD_SUB, 0);
  
  // loop over the inputs
  Serial.print("Starting ... \n\n");
  delay(1000); // Wait for 1000 millisecond(s)

  for (int foursA = 0; foursA <= 1; ++foursA) {
    digitalWrite(DIGIT_A3, foursA);
    for (int foursB = 0; foursB <= 1; ++foursB) {
      digitalWrite(DIGIT_B3, foursB);
      for (int twosA = 0; twosA <= 1; ++twosA) {
        digitalWrite(DIGIT_A2, twosA);
        for (int twosB = 0; twosB <= 1; ++twosB) {
          digitalWrite(DIGIT_B2, twosB);
          for (int onesA = 0; onesA <= 1; ++onesA) {
          digitalWrite(DIGIT_A1, onesA);
            for (int onesB = 0; onesB <= 1; ++onesB) {
              digitalWrite(DIGIT_B1, onesB);
              Ap = ((foursA * 100) + (twosA * 10) + (onesA));
              Bp = ((foursB * 100) + (twosB * 10) + (onesB));

              //Converting A
              if (Ap == 000){
                An = 0;
              }
              else if (Ap == 1){
                An = 1;
              }
              else if (Ap == 10){
                An = 2;
              }
              else if (Ap == 11){
                An = 3;
              }
              else if (Ap == 100){
                An = -4;
              }
              else if (Ap == 101){
                An = -3;
              }
              else if (Ap == 110){
                An = -2;
              }
              else if (Ap == 111){
                An = -1;
              }
              // Converting B
             if (Bp == 000){
                Bn = 0;
              }
              else if (Bp == 1){
                Bn = 1;
              }
              else if (Bp == 10){
                Bn = 2;
              }
              else if (Bp == 11){
                Bn = 3;
              }
              else if (Bp == 100){
                Bn = -4;
              }
              else if (Bp == 101){
                Bn = -3;
              }
              else if (Bp == 110){
                Bn = -2;
              }
              else if (Bp == 111){
                Bn = -1;
              }
              Total = An + Bn;

              Serial.print("A = " + String(foursA) + (twosA) + String(onesA) + "\n");
              Serial.print("B = " + String(foursB) + (twosB) + String(onesB) + "\n");

              if (Total > 3) {
                Serial.print("Overflow\n");
              }
              else if (Total < -4) {
                Serial.print("Underflow\n");
              }
              Serial.print(
              String(An) 
              + " + " 
              + String(Bn) 
              + " = " 
              + String(An + Bn) + "\n\n");
              delay(2000);
            }
          }
        }
      }
    }
  }
  digitalWrite(ADD_SUB, 1);
  for (int foursA = 0; foursA <= 1; ++foursA) {
    digitalWrite(DIGIT_A3, foursA);
    for (int foursB = 0; foursB <= 1; ++foursB) {
      digitalWrite(DIGIT_B3, foursB);
      for (int twosA = 0; twosA <= 1; ++twosA) {
        digitalWrite(DIGIT_A2, twosA);
        for (int twosB = 0; twosB <= 1; ++twosB) {
          digitalWrite(DIGIT_B2, twosB);
          for (int onesA = 0; onesA <= 1; ++onesA) {
          digitalWrite(DIGIT_A1, onesA);
            for (int onesB = 0; onesB <= 1; ++onesB) {
              digitalWrite(DIGIT_B1, onesB);
              Ap = ((foursA * 100) + (twosA * 10) + (onesA));
              Bp = ((foursB * 100) + (twosB * 10) + (onesB));

              //Converting A
              if (Ap == 000){
                An = 0;
              }
              else if (Ap == 1){
                An = 1;
              }
              else if (Ap == 10){
                An = 2;
              }
              else if (Ap == 11){
                An = 3;
              }
              else if (Ap == 100){
                An = -4;
              }
              else if (Ap == 101){
                An = -3;
              }
              else if (Ap == 110){
                An = -2;
              }
              else if (Ap == 111){
                An = -1;
              }
              // Converting B
             if (Bp == 000){
                Bn = 0;
              }
              else if (Bp == 1){
                Bn = 1;
              }
              else if (Bp == 10){
                Bn = 2;
              }
              else if (Bp == 11){
                Bn = 3;
              }
              else if (Bp == 100){
                Bn = -4;
              }
              else if (Bp == 101){
                Bn = -3;
              }
              else if (Bp == 110){
                Bn = -2;
              }
              else if (Bp == 111){
                Bn = -1;
              }
              Total = An - Bn;

              Serial.print("A = " + String(foursA) + (twosA) + String(onesA) + "\n");
              Serial.print("B = " + String(foursB) + (twosB) + String(onesB) + "\n");

              if (Total > 3) {
                Serial.print("Overflow\n");
              }
              else if (Total < -4) {
                Serial.print("Underflow\n");
              }
              Serial.print(
              String(An) 
              + " - " 
              + String(Bn) 
              + " = " 
              + String(An - Bn) + "\n\n");
              delay(2000);
            }
          }
        }
      }
    }
  }
}
void loop() {
  // Done
  Serial.print("\nDone. \n");
  delay(100000000); // Wait for 10000 millisecond(s)
}
