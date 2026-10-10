
#define RED 13
#define YELLOW 12
#define GREEN 11

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  // Red light ON for 3 seconds
  digitalWrite(RED, HIGH);
  delay(3000);
  digitalWrite(RED, LOW);

  // Yellow light ON for 1 second
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(YELLOW, LOW);

  // Green light ON for 5 seconds
  digitalWrite(GREEN, HIGH);
  delay(5000);
  digitalWrite(GREEN, LOW);

  // Yellow light ON for 1 second
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(YELLOW, LOW);
}

