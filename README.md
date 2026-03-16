# Curso Intensivo de Mecatrónica (12 horas)
## Construye tu primer robot autónomo

Curso introductorio dirigido a personas **sin formación en ingeniería** (arquitectos, diseñadores, abogados, administradores o público general).

El objetivo es **comprender los principios de la mecatrónica construyendo un robot real**.

---

# Objetivos del curso

Al finalizar el curso el participante será capaz de:

- Comprender qué es la mecatrónica
- Identificar sensores y actuadores
- Conectar circuitos electrónicos básicos
- Programar un microcontrolador
- Construir un robot móvil simple
- Implementar comportamiento autónomo

---

# Proyecto del curso

Durante el curso los alumnos construirán un:

## Robot seguidor de línea

El robot utilizará:

- sensores infrarrojos
- motores DC
- control mediante microcontrolador
- algoritmo de seguimiento de línea

---

# Duración

**12 horas totales**

Formato sugerido:

- 3 sesiones de 4 horas

---

# Sesión 1 — Fundamentos de Mecatrónica (4 horas)

## Introducción a la Mecatrónica

Conceptos básicos:

- Mecánica
- Electrónica
- Control
- Software

Ejemplos de sistemas mecatrónicos:

- robots industriales
- drones
- impresoras 3D
- automóviles modernos

---

## Electrónica básica

Conceptos fundamentales:

- Voltaje
- Corriente
- Resistencia

Primer circuito:

- LED
- resistencia
- microcontrolador

### Primer programa

```cpp
int led = 13;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH);
  delay(500);

  digitalWrite(led, LOW);
  delay(500);
}
