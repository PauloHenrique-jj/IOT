 # Projeto sensor de luz

este projeto foi desenvolvido dentro do trinkercard, na disciplina de internet das coisas 
(IOT), para a criação de um prototipo com arduino para fazer um sensor de passo.

## Componentes Usados
1 - 1 Arduino Uno
2 - 1 Placa
3 - 6 Jumpers Macho-Femea
4 - 1 Motor de movimento

## Montagem do Circuito
![Imagem do Circuito](sensor_de_movimento.png)

## Explicação do código


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
