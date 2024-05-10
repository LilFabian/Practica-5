/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Conversor de unidades y Contador de numeros impares
   Dev: Fabian Andree Sinay Canel
   Fecha: 2 de mayo de 2024
*/

float Kg_a_Lb(float Kg,float lb);
float A_uA(float A);

const int pin_2 = 2;
const int pin_3 = 3;
const int pin_4 = 4;
const int pin_5 = 5;
const int pin_6 = 6;
const int pin_7 = 7;
const int pin_8 = 8;


int segmentos(int A,int B,int C,int D,int E,int F,int G);
  
void setup(){
  
  pinMode(pin_2, OUTPUT);
  pinMode(pin_3, OUTPUT);
  pinMode(pin_4, OUTPUT);
  pinMode(pin_5, OUTPUT);
  pinMode(pin_6, OUTPUT);
  pinMode(pin_7, OUTPUT);
  pinMode(pin_8, OUTPUT);
  
 Serial.begin(9600);
  Serial.print("La conversion a libras es ");
  Serial.println(Kg_a_Lb(30,2.2046));
  
  Serial.print("La conversion a Micro-amperios es ");
  Serial.println(A_uA(3.5));
}
void loop(){
  segmentos(0, 1, 1, 0, 0, 0, 0);
  delay(1000);
  segmentos(1, 1, 1, 1, 0, 0, 1);
  delay(1000);
  segmentos(1, 0, 1, 1, 0, 1, 1);
  delay(1000);
  segmentos(1, 1, 1, 0, 0, 0, 0);
  delay(1000);
  segmentos(1, 1, 1, 0, 0, 1, 1);
  delay(1000);

}
//Bloque de funcion Kg a Lb
float Kg_a_Lb(float Kg,float lb){
	
  float resultado;
  
  resultado = Kg*lb;
  return resultado;
}
//Bloque de funcion A a uA
float A_uA(float A){
  
  float resultado1;
  resultado1 = A*1000000;
  return resultado1;
}
//Bloque de funcion del display

int segmentos(int A, int B, int C, int D, int E, int F, int G) {
  digitalWrite(pin_2, A);
  digitalWrite(pin_3, B);
  digitalWrite(pin_4, C);
  digitalWrite(pin_5, D);
  digitalWrite(pin_6, E);
  digitalWrite(pin_7, F);
  digitalWrite(pin_8, G);  
}
