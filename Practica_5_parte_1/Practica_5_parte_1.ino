/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Marcha imperial en buzzer
   Dev: Fabian Andree Sinay Canel
   Fecha: 2 de mayo de 2024
*/
int Buzzer = 10;
float Do = 261.626;
float Reb = 277.183;
float Re = 293.665;
float Mib = 311.127;
float Mi = 329.628;
float Fa = 349.228;
float Solb = 369.994;
float Sol = 391.995;
float Lab = 415.305;
float La = 440.000;
float Sib = 466.164; 
float Si = 493.883;

int Negra = 300;
int Blanca = 400;

int espacio = 450;
void setup()
{

}

void loop()
{
 for(int i=1;i < 4;1,i++){
  tone(Buzzer,Sol,Negra);
  delay(espacio);
 }
 for(int i=1;i < 3;1,i++){
 tone(Buzzer,Mib,Negra);
   delay(espacio);
 tone(Buzzer,Sib,Negra);
   delay(espacio);
 tone(Buzzer,Sol,Negra);
  delay(espacio);
 }
 for(int i=1;i < 4;1,i++){
  tone(Buzzer,Re,Negra);
  delay(espacio);
 }
  
 tone(Buzzer,Mib,Negra);
  delay(espacio);
 tone(Buzzer,Sib,Negra);
  delay(espacio);
 tone(Buzzer,Solb,Negra);
  delay(espacio);
  
 tone(Buzzer,Mib,Negra);
  delay(espacio);
 tone(Buzzer,Sib,Negra);
  delay(espacio);
 tone(Buzzer,Sol,Negra);
  delay(espacio);
  
 tone(Buzzer,Sol,Blanca);
  delay(espacio);
  
 for(int i=1;i < 4;1,i++){
  tone(Buzzer,Sol,Negra);
  delay(espacio);
 }
  
 tone(Buzzer,Solb,Negra);
  delay(espacio);
 tone(Buzzer,Fa,Negra);
  delay(espacio);
 tone(Buzzer,Mi,Negra);
  delay(espacio);
 tone(Buzzer,Mib,Negra);
  delay(espacio);
 tone(Buzzer,Mi,Negra);
  delay(espacio);
  
 tone(Buzzer,Lab,Negra);
  delay(espacio);
 tone(Buzzer,Reb,Negra);
  delay(espacio);
  
 tone(Buzzer,Do,Negra);
  delay(espacio);
 tone(Buzzer,Si,Negra);
  delay(espacio);
 tone(Buzzer,Sib,Negra);
  delay(espacio);
 tone(Buzzer,La,Negra);
  delay(espacio);
 tone(Buzzer,Sib,Negra);
  delay(espacio);
  
 tone(Buzzer,Mib,Negra);
  delay(espacio);
 tone(Buzzer,Solb,Negra);
  delay(espacio);
 tone(Buzzer,Mib,Negra);
  delay(espacio);
 tone(Buzzer,Solb,Negra);
  delay(espacio);
  
 tone(Buzzer,Sib,Negra);
  delay(espacio);
 tone(Buzzer,Sol,Negra);
  delay(espacio);
 tone(Buzzer,Sib,Negra);
  delay(espacio);
 tone(Buzzer,Re,Negra);
  delay(espacio);
  
 tone(Buzzer,Sol,Blanca);
  delay(espacio);
  
 for(int i=1;i < 4;1,i++){
  tone(Buzzer,Sol,Negra);
  delay(espacio);
 }
  
 tone(Buzzer,Solb,Negra);
  delay(espacio);
 tone(Buzzer,Fa,Negra);
  delay(espacio);
 tone(Buzzer,Mi,Negra);
  delay(espacio);
 tone(Buzzer,Mib,Negra);
  delay(espacio);
 tone(Buzzer,Mi,Negra);
  delay(espacio);
  
 tone(Buzzer,Lab,Negra);
  delay(espacio);
 tone(Buzzer,Reb,Negra);
  delay(espacio);
  
 tone(Buzzer,Do,Negra);
  delay(espacio);
 tone(Buzzer,Si,Negra);
  delay(espacio);
 tone(Buzzer,Sib,Negra);
  delay(espacio);
 tone(Buzzer,La,Negra);
  delay(espacio);
 tone(Buzzer,Sib,Negra);
  delay(espacio);
  
 tone(Buzzer,Mib,Negra);
  delay(espacio);
 tone(Buzzer,Solb,Negra);
  delay(espacio);

   for(int i=1;i < 3;1,i++){
 tone(Buzzer,Mib,Negra);
   delay(espacio);
 tone(Buzzer,Sib,Negra);
   delay(espacio);
 tone(Buzzer,Sol,Negra);
  delay(espacio);
 }
}