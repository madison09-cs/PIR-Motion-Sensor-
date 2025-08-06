int ledPin = 13;       // LED
int pirPin = 2;        // PIR sensor signal pin
int pirStat = 0;       // PIR sensor status
const int piezoBuzzerPin = 7; 

void setup() {
  pinMode(piezoBuzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
  Serial.println("Sensor warming up...");
  delay(5000);
  Serial.println("Ready..");

}

void loop() {
  pirStat = digitalRead(pirPin);
  if (pirStat == HIGH) {
    Serial.println("Motion Detected!");
    digitalWrite(ledPin, HIGH);
    delay(250);
    tone(piezoBuzzerPin, 1000);
    delay(100);
    tone(piezoBuzzerPin, 1500);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(250);
    noTone(piezoBuzzerPin);
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion Detected.");
  }
}

