//www.elegoo.com
//2016.12.09

// Arduino pin numbers
const int X_pin = 0; // analog pin connected to sensor 1
const int Y_pin = 1; // analog pin connected to sensor 2

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sensor 1: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Sensor 2: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");
  delay(500);
}
