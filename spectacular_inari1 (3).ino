// C++ code
// analWrie, comando que simula uma porta analica em uma porta digital
int intensidade = 0;

//int i = 0;

//int j = 0;

void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  intensidade = 0;
  for (intensidade = 0; intensidade <= 255; intensidade += 5) {
    analogWrite(10, intensidade);
    delay(20); // Wait for 20 millisecond(s)
  }
  intensidade = 255;
  for (intensidade = 255; intensidade >= 0; intensidade -= 5) {
    analogWrite(10, intensidade);
    delay(20); // Wait for 20 millisecond(s)
  }
}