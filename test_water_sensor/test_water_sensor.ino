int sensorReading;
int range;
const int sensorMin = 200;
const int sensorMax = 1023;
void setup() {
  Serial.begin(9600);

}

void loop() {
  sensorReading=analogRead(A0);
  range = map(sensorReading, sensorMin, sensorMax, 100, 0);
  Serial.println(range);
  delay(5000);
}
