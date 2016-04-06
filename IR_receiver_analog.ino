void setup() {
  Serial.begin(115200);
}

void loop() {
  //float sensorValue = analogRead(A0)*(5.0/1023.0);
  float sensorValue0 = analogRead(A0);
  float sensorValue1 = analogRead(A1);
  Serial.print(sensorValue1);
  Serial.print(" , ");
  Serial.println(sensorValue0);
  delay(100);
}
