// Sensores
int sensorIzq = 2;
int sensorDer = 3;

// Motor A
int IN1 = 8;
int IN2 = 9;

// Motor B
int IN3 = 10;
int IN4 = 11;

int velocidad = 150;

void setup() {

  pinMode(sensorIzq, INPUT);
  pinMode(sensorDer, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

}

void loop() {

  int izq = digitalRead(sensorIzq);
  int der = digitalRead(sensorDer);

  // avanzar
  if(izq==0 && der==0)
  {
    digitalWrite(IN1,HIGH);
    analogWrite(IN2,velocidad);

    digitalWrite(IN3,HIGH);
    analogWrite(IN4,velocidad);
  }

  // girar izquierda
  else if(izq==0 && der==1)
  {
    digitalWrite(IN1,LOW);
    analogWrite(IN2,0);

    digitalWrite(IN3,HIGH);
    analogWrite(IN4,velocidad);
  }

  // girar derecha
  else if(izq==1 && der==0)
  {
    digitalWrite(IN1,HIGH);
    analogWrite(IN2,velocidad);

    digitalWrite(IN3,LOW);
    analogWrite(IN4,0);
  }

  // detener
  else
  {
    analogWrite(IN2,0);
    analogWrite(IN4,0);
  }

}