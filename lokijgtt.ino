
// Control de velocidad de motor DC con PWM
// Arduino UNO

int motor = 9;   // Pin PWM conectado al transistor

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {

  // Velocidad baja
  analogWrite(motor, 70);
  delay(3000);

  // Velocidad media
  analogWrite(motor, 150);
  delay(3000);

  // Velocidad alta
  analogWrite(motor, 255);
  delay(3000);

  // Motor apagado
  analogWrite(motor, 0);
  delay(3000);
}
