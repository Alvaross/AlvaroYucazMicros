/*  Univerdidad Tecnica Del Norte
          FICA-CIERCOM
          alvaro Yucáz
          18/10/2016
  Juego de 14 leds empleado ciclos 
          for y subrutinas
 */
int contador=0; // definir variable 
int leds [14]={0,1,2,3,4,5,6,7,8,9,10,11,12,13}; //definir un vector de 14 posiciones 
void setup() {
  pinMode(0,OUTPUT);        // pin 0 declarado como salida
  pinMode(1,OUTPUT);        // pin 1 declarado como salida
  pinMode(2,OUTPUT);        // pin 2 declarado como salida
  pinMode(3,OUTPUT);        // pin 3 declarado como salida
  pinMode(4,OUTPUT);       // pin 4 declarado como salida
  pinMode(5,OUTPUT);       // pin 5 declarado como salida
  pinMode(6,OUTPUT);       // pin 6 declarado como salida
  pinMode(7,OUTPUT);       // pin 7 declarado como salida
  pinMode(8,OUTPUT);       // pin 8 declarado como salida
  pinMode(9,OUTPUT);       // pin 9 declarado como salida
  pinMode(10,OUTPUT);      // pin 10 declarado como salida
  pinMode(11,OUTPUT);      // pin 11 declarado como salida
  pinMode(12,OUTPUT);      // pin 12 declarado como salida
  pinMode(13,OUTPUT);      // pin 13 declarado como salida
}
void luces_1 (){
  for(;contador<14;contador++){             //ciclo para el desplazamiento de posiciones en orden asendente 
  digitalWrite(leds[contador],HIGH);       //condicion para que encienda el led en la posicion del vector
  delay(150);                             //retardo
  digitalWrite(leds[contador],LOW);       //condicion para que emcienda el led en la posocion del vector
    delay(150);                           //retardo
  contador=contador+1;                    //aumento del contador en 1 para que la secuencia sea de 2 en 2
  }                                 
    for(14;contador>=0;contador--){        //ciclo para el desplazamiento de posiciones en orden desendente 
    digitalWrite(leds[contador],HIGH);    //condicion para que se encienda  el led en la psocion del vector
  delay(150);                            //retardo
  digitalWrite(leds[contador],LOW);      //condicion para que encienda el led en la psocion del vector
    delay(150);                          //retardo
  contador=contador-1;                   //resto el contador en 1 para que la secuencia sea de 2 en 2
  }
}
void luces_2(){
   for(contador=6;contador<=13;contador++){    //ciclo para el desplazamiento desde la posicion 6 a la derecha
   digitalWrite(leds[contador],HIGH);          //condicion para que encienda el led en la posicion del vector
   delay(150);                                 //retardo
   digitalWrite(leds[contador],LOW);           //condicion para que encienda el led en la psocion del vector
   delay(150);                                 //retardo
}
for(contador=6;contador>=0;contador--){        //ciclo para el desplazamiento desde la posicion 6 a la izquierda
   digitalWrite(leds[contador],HIGH);          //condicion para que encienda el led en la posicion del vector
   delay(150);                                 //retardo
   digitalWrite(leds[contador],LOW);           //condicion para que encienda el led en la psocion del vector
   delay(150);                                 //retardo
}
}
 void luces_3(){ 
int k=13;                                      // inicializo una variable auxiliar K 
for(contador=6; contador<=13;contador++){      //condicion para lea la posicion del vector de 6 al 13 
digitalWrite(leds[contador],HIGH);             //condicion para que encienda el led en la posicion del vector
digitalWrite(k-leds[contador],HIGH);           //condicion para que encienda  la diferencia del vector 
delay(100); //retardo 
} 
for(int contador=13; contador>=0;contador--){    // Al revez 
digitalWrite(leds[contador], LOW); 
digitalWrite(k-leds[contador], LOW); 
delay(100); 
} 
}
void loop() {
 luces_1();   // ejecuta el metodo
delay(500);   //retardo
luces_2();    //ejecuta el metodo
delay(500);   // retardo
luces_3();    //ejecuta el metodo
void(500);    //retardo
}
