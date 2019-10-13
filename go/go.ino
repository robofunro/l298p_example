int E1 = 10;
int M1 = 12;
int E2 = 11;
int M2 = 13;
void setup()
{
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
}
void loop()
{
  go(75,-75);
  delay(1000);




}


void go(int left, int right) {

  if (left >= 0) {
    digitalWrite(M1, HIGH);
  } else {
    digitalWrite(M1, LOW);
  }
  analogWrite(E1, abs(left));


  if (right >= 0) {
    digitalWrite(M2, HIGH);
  } else {
    digitalWrite(M2, LOW);
  }
  analogWrite(E2, abs(right));


}
