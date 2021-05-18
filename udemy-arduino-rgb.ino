#define RED_PIN 5
#define BLUE_PIN 4
#define GREEN_PIN 3
#define WAIT_FOR 1000

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  delay(WAIT_FOR);
  digitalWrite(RED_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  delay(WAIT_FOR);
  digitalWrite(RED_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(WAIT_FOR);
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  delay(WAIT_FOR);
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(WAIT_FOR);
  digitalWrite(RED_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  delay(WAIT_FOR);
}
