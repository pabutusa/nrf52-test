#include <Arduino.h>

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  delay(1000);
  Serial.print("ping ...");

}