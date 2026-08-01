#define LED_PIN 2   // D2 = GPIO2

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED ON
  delay(500);                   // 500 ms

  digitalWrite(LED_PIN, LOW);   // LED OFF
  delay(500);                   // 500 ms
}