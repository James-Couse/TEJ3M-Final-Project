// Created on: Jan 2024
// Created by: James Couse
// Created for: This is the code for a 2-bit adder

const int DIGIT_A1 = 13;
const int DIGIT_B1 = 12;
const int DIGIT_A2 = 7;
const int DIGIT_B2 = 8;

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

  for (int twosA = 0; twosA <= 1; ++twosA) {
    digitalWrite(DIGIT_A2, twosA);
    for (int twosB = 0; twosB <= 1; ++twosB) {
      digitalWrite(DIGIT_B2, twosB);
      for (int onesA = 0; onesA <= 1; ++onesA) {
      digitalWrite(DIGIT_A1, onesA);
        for (int onesB = 0; onesB <= 1; ++onesB) {
          digitalWrite(DIGIT_B1, onesB);
          Serial.print("A = " + String(twosA) + String(onesA) + "\n");
          Serial.print("B = " + String(twosB) + String(onesB) + "\n");
          Serial.print(String
          (onesA + (2 * twosA)) 
          + " + " 
          + String(onesB + (2 * twosB)) 
          + " = " 
          + String((onesA + (2 * twosA)) + (onesB + (2 * twosB))) + "\n\n");
          delay(4000);
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
