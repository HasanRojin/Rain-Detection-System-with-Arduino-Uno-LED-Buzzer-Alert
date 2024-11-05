                // Rain Detection System with Arduino Uno | LED & Buzzer Alert.By Team Barcode 

const int waterSensorPin = A0; // Analog pin for water sensor
const int ledPin = 8;          // Digital pin for LED
const int buzzerPin = 9;       // Digital pin for buzzer

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}
           
void loop() {
  int sensorValue = analogRead(waterSensorPin);
  Serial.println(sensorValue);

  if (sensorValue > 500) { // Adjust threshold as needed
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}
