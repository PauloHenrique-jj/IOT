// C++ code
//
int sensorPIR =3;
int buzzer =5;
void setup()
{
  pinMode(sensorPIR, INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
 int detectarPresencao= digitalRead(sensorPIR);
  if(detectarPresencao == 1){
    tone(buzzer,264);
  }else{
   noTone(buzzer);
  }
  
}
