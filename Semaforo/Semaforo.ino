const int RED = 12;
const int YELLOW = 10;
const int GREEN = 8;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  digitalWrite(RED, HIGH);
  delay(100000); // 1M40S
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  delay(110000); // 1M50S
  for(int i=0;i<5;i++){
      digitalWrite(GREEN, LOW);
      delay(1000);
      digitalWrite(GREEN, HIGH);
      delay(1000);
  }
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(5000); // 5S
  digitalWrite(YELLOW, LOW);
}