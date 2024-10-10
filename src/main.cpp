#include <Arduino.h>

// int eixo_X = A0; //PINO REFERENTE A LIGAÇÃO DO EIXO X
// int eixo_Y = A1; //PINO REFERENTE A LIGAÇÃO DO EIXO Y
// int botao = 22; //PINO REFERENTE A LIGAÇÃO NO PINO KEY (EIXO Z)

// void setup(){
//   pinMode (botao, INPUT_PULLUP); //DEFINE A PORTA COMO ENTRADA / "_PULLUP" É PARA ATIVAR O RESISTOR INTERNO
//   //DO ARDUINO PARA GARANTIR QUE NÃO EXISTA FLUTUAÇÃO ENTRE 0 (LOW) E 1 (HIGH)
//   Serial.begin (9600); //INICIALIZA O MONITOR SERIAL
// }
// void loop(){
//     Serial.println("x: " + (String)analogRead(eixo_X) + ", y: " + (String)analogRead(eixo_Y));
//     delay(200); //INTERVALO DE 200 MILISSEGUNDOS
// }

const int pinoSensor = 5; 
 
void setup() {
  pinMode(pinoSensor, INPUT); 
  Serial.begin(9600);
}
void loop() {
  if (digitalRead(pinoSensor) == HIGH){ 
    Serial.println("vibra");
  }
  else{
    Serial.println("não vibra");
  } 
  delay(200); 
}