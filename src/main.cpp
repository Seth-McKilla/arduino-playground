#include <Arduino.h>
#define onboard_red 8
#define onboard_blue 9
#define onboard_green 10
#define delay_time delay(500)

void setup() {
  pinMode(onboard_red, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(onboard_red, HIGH);
    delay_time;
    digitalWrite(onboard_red, LOW);
    delay_time;
  }

  for (int i = 0; i < 10; i++) {
    digitalWrite(onboard_blue, HIGH);
    delay_time;
    digitalWrite(onboard_blue, LOW);
    delay_time;
  }

  for (int i = 0; i < 15; i++) {
    digitalWrite(onboard_green, HIGH);
    delay_time;
    digitalWrite(onboard_green, LOW);
    delay_time;
  }
}