// 2 juegos de luces 
    //1 juego con for annidado(pares) // sw_=1 && sw_2==0
    //1 juego random (impares)        // sw_1=1 66 sw_2=1
//Inicializar variables de pines
int led_1=8;
int led_2=9;
int led_3=10;
int led_4=11;
int led_5=12;
int led_6=13;
int pulsador=0;
int sw_1=1;
int sw_2=2;
int vector_leds [6]={led_1,led_2,led_3,led_4,led_5,led_6};
////////////////////
//variables de contadores
int i=0;
int j=0;
//////////////////
void setup() {
  pinMode(led_1,OUTPUT); // pin 8 como salida
  pinMode(led_2,OUTPUT); // pin 9 como salida
  pinMode(led_3,OUTPUT); // pin 10 como salida
  pinMode(led_4,OUTPUT); // pin 11 como salida
  pinMode(led_5,OUTPUT); // pin 12 como salida
  pinMode(led_6,OUTPUT); // pin 13 como salida
  pinMode(sw_1,INPUT);   // pin 7 como entrada
  pinMode(sw_2,INPUT);   // pin 6 como entrada
  pinMode(pulsador,INPUT); // pin 5 como entrada
}
void juego(){
   for(;j<5;j++){ //for1
      for(;i<6;i++){//for2
          digitalWrite(vector_leds[i],HIGH);// ponemos 5v en cada posicion del vector
          delay(200);  //retardo
          digitalWrite(vector_leds[i],LOW); // ponemos 0v en cada posicion del vector
          delay(200);//retardo
       }//for2
       i=0; // reinicio de variable 
   }//for1   
}
void loop() {

   if(digitalRead(sw_1)==HIGH&&digitalRead(sw_2)==LOW){
       for(i=1;i<6;i=i+2){//for2
         digitalWrite(vector_leds[i],HIGH);// ponemos 5v en cada posicion del vector
         delay(200);  //retardo
         digitalWrite(vector_leds[i],LOW); // ponemos 0v en cada posicion del vector
         delay(200);//retardo
            }//for2
       i=0; // reinicio de variable 
   }//for1 
    if(digitalRead(sw_1)==HIGH&&digitalRead(sw_2)==HIGH){
       for(;i<6;i=i+2){//for2
         digitalWrite(vector_leds[i],HIGH);// ponemos 5v en cada posicion del vector
         delay(200);  //retardo
         digitalWrite(vector_leds[i],LOW); // ponemos 0v en cada posicion del vector
         delay(200);//retardo
            }//for2
       i=0; // reinicio de variable 
   }//for1 
   
}
