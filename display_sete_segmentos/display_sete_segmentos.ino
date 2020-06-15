#define LED_A 4
#define LED_F 5
#define LED_B 0
#define LED_G 16
#define LED_E 2
#define LED_C 12
#define LED_D 14
#define LED_P 13

/*
     A
  F     B
     G
  E     C
     D    P

*/
void setup(){
  pinMode(LED_A, OUTPUT);
  pinMode(LED_F, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_E, OUTPUT);
  pinMode(LED_C, OUTPUT);
  pinMode(LED_D, OUTPUT);
  pinMode(LED_P, OUTPUT);
}

void piscarPonto(){
 delay(1000);
 digitalWrite(LED_P, LOW);
 delay(1000);
 digitalWrite(LED_P, HIGH);
 digitalWrite(LED_A, HIGH);
 digitalWrite(LED_F, HIGH);
 digitalWrite(LED_B, HIGH);
 digitalWrite(LED_G, HIGH);
 digitalWrite(LED_E, HIGH);
 digitalWrite(LED_C, HIGH);
 digitalWrite(LED_D, HIGH);
}

void loop(){
 //0
 digitalWrite(LED_A, LOW);
 digitalWrite(LED_F, LOW);
 digitalWrite(LED_B, LOW);
 digitalWrite(LED_E, LOW);
 digitalWrite(LED_C, LOW);
 digitalWrite(LED_D, LOW);
 piscarPonto();
 //1
 digitalWrite(LED_B, LOW);
 digitalWrite(LED_C, LOW);
 piscarPonto();
 //2
 digitalWrite(LED_A, LOW);
 digitalWrite(LED_B, LOW);
 digitalWrite(LED_G, LOW);
 digitalWrite(LED_E, LOW);
 digitalWrite(LED_D, LOW);
 piscarPonto();
 //3
 digitalWrite(LED_A, LOW);
 digitalWrite(LED_B, LOW);
 digitalWrite(LED_G, LOW);
 digitalWrite(LED_C, LOW);
 digitalWrite(LED_D, LOW);
 piscarPonto();
 //4
 digitalWrite(LED_F, LOW);
 digitalWrite(LED_B, LOW);
 digitalWrite(LED_G, LOW);
 digitalWrite(LED_C, LOW);
 piscarPonto();
 //5
 digitalWrite(LED_A, LOW);
 digitalWrite(LED_F, LOW);
 digitalWrite(LED_G, LOW);
 digitalWrite(LED_C, LOW);
 digitalWrite(LED_D, LOW);
 piscarPonto();
 //6
 digitalWrite(LED_A, LOW);
 digitalWrite(LED_F, LOW);
 digitalWrite(LED_G, LOW);
 digitalWrite(LED_E, LOW);
 digitalWrite(LED_C, LOW);
 digitalWrite(LED_D, LOW);
 piscarPonto();
 //7
 digitalWrite(LED_A, LOW);
 digitalWrite(LED_B, LOW);
 digitalWrite(LED_C, LOW);
 piscarPonto();
 //8
 digitalWrite(LED_A, LOW);
 digitalWrite(LED_F, LOW);
 digitalWrite(LED_B, LOW);
 digitalWrite(LED_G, LOW);
 digitalWrite(LED_E, LOW);
 digitalWrite(LED_C, LOW);
 digitalWrite(LED_D, LOW);
 piscarPonto();
 //9
 digitalWrite(LED_A, LOW);
 digitalWrite(LED_F, LOW);
 digitalWrite(LED_B, LOW);
 digitalWrite(LED_G, LOW);
 digitalWrite(LED_C, LOW);
 piscarPonto();
}
