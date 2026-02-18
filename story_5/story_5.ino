// C++ code
const int LEFT_REVERSE = 12; //Red LED
const int LEFT_FORWARD = 11; //Green LED
const int LEFT_ENABLE = 10; //White LED
const int RIGHT_ENABLE = 9; //Yellow LED
const int RIGHT_REVERSE = 8; //Orange LED
const int RIGHT_FORWARD = 7; //Blue LED
void setup()
{
  pinMode(LEFT_REVERSE, OUTPUT);
  pinMode(LEFT_FORWARD, OUTPUT);
  pinMode(LEFT_ENABLE, OUTPUT);
  pinMode(RIGHT_ENABLE, OUTPUT);
  pinMode(RIGHT_REVERSE, OUTPUT);
  pinMode(RIGHT_FORWARD, OUTPUT);
}

void forward() {
  digitalWrite(LEFT_REVERSE, LOW);
  digitalWrite(RIGHT_REVERSE, LOW);
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(RIGHT_FORWARD, HIGH);
  analogWrite(LEFT_ENABLE, 200);
  analogWrite(RIGHT_ENABLE, 100);
  delay(2000);
  analogWrite(LEFT_ENABLE, 100);
  analogWrite(RIGHT_ENABLE, 200);
  delay(4000);
  analogWrite(LEFT_ENABLE, 200);
  analogWrite(RIGHT_ENABLE, 100);
  delay(3000);
  analogWrite(LEFT_ENABLE, 100);
  analogWrite(RIGHT_ENABLE, 200);
  delay(1000);
  digitalWrite(LEFT_ENABLE, LOW);
  digitalWrite(RIGHT_ENABLE, LOW);
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(RIGHT_FORWARD, LOW);
}

void left(int delaytime) {
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(RIGHT_FORWARD, HIGH);
  analogWrite(LEFT_ENABLE, 200);
  analogWrite(RIGHT_ENABLE, 255);
  delay(delaytime);
  digitalWrite(LEFT_ENABLE, LOW);
  digitalWrite(RIGHT_ENABLE, LOW);
}

void right(int delaytime) {
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(RIGHT_FORWARD, HIGH);
  analogWrite(RIGHT_ENABLE, 255);
  analogWrite(LEFT_ENABLE, 200);
  delay(delaytime);
  digitalWrite(LEFT_ENABLE, LOW);
  digitalWrite(RIGHT_ENABLE, LOW);
}

void loop()
{
  forward();
  digitalWrite(RIGHT_FORWARD, HIGH);
  digitalWrite(LEFT_FORWARD, HIGH);
  analogWrite(LEFT_ENABLE, 200);
  analogWrite(RIGHT_ENABLE, 200);
  delay(2000);
  left(2000);
  right(2000);
  left(2000);
  right(2000);
}