#define RED   6
#define GREEN 4
#define BLUE  2

const int delayTime = 20;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
}

void loop() {
  int redValue   = 0;
  int greenValue = 255;
  int blueValue  = 0;

  for (int i = 0; i < 255; i++) {
    greenValue -= 1;
    blueValue += 1;
    analogWrite(GREEN,greenValue);
    analogWrite(BLUE,blueValue);
    delay(delayTime);
  }
}
