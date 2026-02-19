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

void forward(int delaytime) {
  digitalWrite(LEFT_REVERSE, LOW);
  digitalWrite(RIGHT_REVERSE, LOW);
  digitalWrite(LEFT_FORWARD, HIGH);
  digitalWrite(RIGHT_FORWARD, HIGH);
  digitalWrite(LEFT_ENABLE, HIGH);
  digitalWrite(RIGHT_ENABLE, HIGH);
  delay(delaytime);
  digitalWrite(LEFT_ENABLE, LOW);
  digitalWrite(RIGHT_ENABLE, LOW);
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(RIGHT_FORWARD, LOW);
}

void reverse(int delaytime) {
  digitalWrite(LEFT_FORWARD, LOW);
  digitalWrite(RIGHT_FORWARD, LOW);
  digitalWrite(LEFT_REVERSE, HIGH);
  digitalWrite(RIGHT_REVERSE, HIGH);
  digitalWrite(LEFT_ENABLE, HIGH);
  digitalWrite(RIGHT_ENABLE, HIGH);
  delay(delaytime);
  digitalWrite(LEFT_ENABLE, LOW);
  digitalWrite(LEFT_REVERSE, LOW);
  digitalWrite(RIGHT_ENABLE, LOW);
  digitalWrite(RIGHT_REVERSE, LOW);
}


void loop()
{
  forward(5000);
  delay(1000);
  reverse(2000);
}
