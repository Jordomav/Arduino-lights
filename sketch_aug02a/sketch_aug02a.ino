#define RED 3
#define GREEN 5
#define BLUE 6

int redNumber;
int greenNumber;
int blueNumber;

void setup () {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  }

void loop () {
  redNumber = 0;
  greenNumber = 0;
  blueNumber = 0;

  analogWrite(RED, 0);
  delay(1000);
  analogWrite(GREEN, 0);
  delay(1000);
  analogWrite(GREEN, 100);
  analogWrite(RED, 59);
  delay(1000);
  analogWrite(BLUE, 100);
  delay(1000);
  }
