void setup() {
  Serial.begin(115200);
  delay(1500);
  Serial.println("SYSTEM ONLINE");
}

void loop() {
  Serial.println("HEARTBEAT");
  delay(1000);
}
