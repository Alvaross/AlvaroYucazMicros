/*        Universidad Tecnica del norte
 *            FICA-CIERCOM
 *            Alvaro Yucàz
 *              26/10/2016 
 *  Juegos de luces Empleando ciclos for
 *  Juego 1:juego con for annidado, funciona cuando              // sw_1=1 && sw_2=0.  Inicia  el juego y este se repite el numero de veces que sea igual al número random aleatorio.
 *  Juego 2:Este juego tiene un for anidado y funciona cuando   // sw_1=0 && sw_2=1. El juego inicia prendiendo los extremos en serie hacia el centro,esto se repite el numero de veces que sea igual al número random.
 */

// Inicialzar Variables de pines
int led_1=8;    
int led_2=9;     
int led_3=10;   
int led_4=11;   
int led_5=12;   
int led_6=13;  
int sw_1=7;     
int sw_2=6;   
int vector_leds[6]={led_1,led_2,led_3,led_4,led_5,led_6};   //declaracion del vector
/////////////////
// Variables de contadores
int i=0;
int j=0;
int cont_1=0;
int cont_2=0;
int valor_limite;
//////////
void setup() {
  // put your setup code here, to run once:
  pinMode(led_1,OUTPUT);      // pin 8 declarado como salida
  pinMode(led_2,OUTPUT);      // pin 9 declarado como salida 
  pinMode(led_3,OUTPUT);      // pin 10 declarado como salida
  pinMode(led_4,OUTPUT);      // pin 11 declarado como salida
  pinMode(led_5,OUTPUT);      // pin 12 declarado como salida
  pinMode(led_6,OUTPUT);      // pin 13 declarado como salida
  pinMode(sw_1,INPUT);        //switch 1 declarado como entrada
  pinMode(sw_2,INPUT);        //switch 2 declarado como entrada
}

void loop() { 
  //juego 1
    if(digitalRead(sw_1)==HIGH && digitalRead(sw_2)==LOW){
     valor_limite=random(7);                    // valor del limite      
     for(j=0;j<valor_limite;j++){               //for 1 ciclo que  repite el numero de veces que sea igual al número random aleatorio
              for(i=8;i<14;i++){                //for 2 ciclo de desplasamiento del vector
                       digitalWrite(i,HIGH);    // ponemos 5v en cada posicion del vector
                       delay(100);              //retardo
               }//For 2                         //Cierre del for 2
               for(i=13;i>7;i--){//for 3        //for 3 ciclo de desplasamiento del vector
                      digitalWrite(i,LOW);      //ponemos 0V en cada posicion del vector
                      delay(100);               //retardo
                 }//for 3                       //Cierre del for 2
               i=8;                             // variable para que empieze el ciclo desde 8
              }//for 1                          //Cierre del for 3
              delay(300);                       //retarde antes empezar la siguiente secuencia   
            } //Final juego de luces 1 

  // juego 2
  else{                                                                                    // caso contrario 
     if(digitalRead(sw_1)==LOW&&digitalRead(sw_2)==HIGH){
           delay(200);                                                                     //retardo
           valor_limite=random(8);                                                         // valor del limite  
           for(j=0;j<valor_limite;j++){                                                   //for 1 ciclo que  repite el numero de veces que sea igual al número random aleatorio para encender el vector
               for (cont_1 = 8,cont_2=13; cont_1 < 11; cont_1++,cont_2--) {               //For 2 desplazamiento asendente y desendente de los contadores
                    digitalWrite(cont_1, HIGH);                                           //ponemos 0V en cada posicion del vector        
                    digitalWrite(cont_2, HIGH);                                           //ponemos 0V en cada posicion del vector
                    delay(100);                                                           //retardo
                   }                                                                      //Cierre del for 1

                 for (cont_1 = 10, cont_2=11; cont_2 < 14; cont_1--,cont_2++)             {// For 3 desplazamiento asendente y desendente de los contadores para apagar el vector
                     digitalWrite(cont_1, LOW);                                            //ponemos 0V en cada posicion del vector
                     digitalWrite(cont_2, LOW);                                            //ponemos 0V en cada posicion del vector
                     delay(100);                                                           //retardo
                    }                                                                      //Cierre del for 3
                 }                                                                        //Cierre del for 1
       }
        delay(300);                                                                        //Tiempo de espera antes de empezar la siguiente secuencia
      }                                                                                     //Final juego de luces 2
     
   }

