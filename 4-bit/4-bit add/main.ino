// Created on: Jan 2024
// Created by: James Couse
// Created for: This is the code for a 2-bit adder

const int DIGIT_A1 = 13;
const int DIGIT_B1 = 12;
const int DIGIT_A2 = 10;
const int DIGIT_B2 = 9;
const int DIGIT_A3 = 7;
const int DIGIT_B3 = 6;
const int DIGIT_A4 = 4;
const int DIGIT_B4 = 3;

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
  
  // set all pins to "0)
  digitalWrite(DIGIT_A1, 0); //LOW and HIGH just reference 0 & 1
  digitalWrite(DIGIT_B1, 0);
  digitalWrite(DIGIT_A2, 0);
  digitalWrite(DIGIT_B2, 0);
  digitalWrite(DIGIT_A3, 0);
  digitalWrite(DIGIT_B3, 0);
  digitalWrite(DIGIT_A4, 0);
  digitalWrite(DIGIT_B4, 0);
  
  // loop over the inputs
  Serial.print("Starting ... \n\n");
  delay(1000); // Wait for 1000 millisecond(s)

  for (int eightsA = 0; eightsA <= 1; ++eightsA) {
    digitalWrite(DIGIT_A4, eightsA);
    for (int eightsB = 0; eightsB <= 1; ++eightsB) {
      digitalWrite(DIGIT_B4, eightsB);
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
                  Serial.print("A = " + String(eightsA) + String(foursA) + String(twosA) + String(onesA) + "\n");
                  Serial.print("B = " + String(eightsB) + String(foursB) + String(twosB) + String(onesB) + "\n");
                  Serial.print(
                  String(onesA + (2 * twosA) + (4 * foursA) + (8 * eightsA)) 
                  + " + " 
                  + String(onesB + (2 * twosB) + (4 * foursB) + (8 * eightsB)) 
                  + " = " 
                  + String((onesA + (2 * twosA) + (4 * foursA) + (8 * eightsA)) + (onesB + (2 * twosB) + (4 * foursB) + (8 * eightsB))) + "\n\n");
                  delay(2000);
                }
              }
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
