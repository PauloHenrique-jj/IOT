// variavel para controlar as voltasdo motor
 #define voltas =1024
//criando objeto para controlar o motor
accelStepper motor (AccelStepper::FULL4WIRE,8,10,9,11)


void setup() {
//definir a velocidade maxima do motor
  motor.setMaxSpeed(1000);
//definir aceleração maxima do motor
  motor.setAcceleration(100);
  
}

void loop() {
//habilitar as portas de controle do motor no arduino
  motor.run();
//fazer o motor movimentar a 360º/1024 passos
  motor.moveTo(voltas);
//girar a sentido contrario
  motor,moveTo(-motor.currentPosition());
  delay(1000);



}
