#define BUZZER_PIN D7

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW); // ensure off
}

void loop() {
  digitalWrite(BUZZER_PIN, HIGH); // buzzer ON
  delay(500);
  digitalWrite(BUZZER_PIN, LOW);  // buzzer OFF
  delay(500);
}
