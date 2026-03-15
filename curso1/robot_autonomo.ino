// Sensor obstáculo
int sensor = 2;

// Motor A
int IN1 = 8;
int IN2 = 9;

// Motor B
int IN3 = 10;
int IN4 = 11;

int velocidad = 150;

void setup()
{
  pinMode(sensor, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop()
{

  int obstaculo = digitalRead(sensor);

  if(obstaculo == 1)
  {
    avanzar();
  }
  else
  {
    retroceder();
    delay(500);

    girar();
    delay(500);
  }

}

void avanzar()
{
  digitalWrite(IN1,HIGH);
  analogWrite(IN2,velocidad);

  digitalWrite(IN3,HIGH);
  analogWrite(IN4,velocidad);
}

void retroceder()
{
  analogWrite(IN1,velocidad);
  digitalWrite(IN2,LOW);

  analogWrite(IN3,velocidad);
  digitalWrite(IN4,LOW);
}

void girar()
{
  digitalWrite(IN1,HIGH);
  analogWrite(IN2,velocidad);

  digitalWrite(IN3,LOW);
  analogWrite(IN4,0);
}