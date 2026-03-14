int IN1 = 8;
int IN2 = 9;   // PWM motor A

int IN3 = 10;
int IN4 = 11;  // PWM motor B

void setup() {

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

}

void loop() {

  // ---- GIRO ADELANTE ----

  digitalWrite(IN1, HIGH);
  digitalWrite(IN3, HIGH);

  // ACELERAR
  for(int vel=0; vel<=255; vel+=5)
  {
    analogWrite(IN2, vel);
    analogWrite(IN4, vel);
    delay(50);
  }

  delay(2000);

  // FRENAR
  for(int vel=255; vel>=0; vel-=5)
  {
    analogWrite(IN2, vel);
    analogWrite(IN4, vel);
    delay(50);
  }

  delay(2000);


  // ---- GIRO REVERSA ----

  digitalWrite(IN2, LOW);
  digitalWrite(IN4, LOW);

  // ACELERAR EN REVERSA
  for(int vel=0; vel<=255; vel+=5)
  {
    analogWrite(IN1, vel);
    analogWrite(IN3, vel);
    delay(50);
  }

  delay(2000);

  // FRENAR
  for(int vel=255; vel>=0; vel-=5)
  {
    analogWrite(IN1, vel);
    analogWrite(IN3, vel);
    delay(50);
  }

  delay(3000);

}