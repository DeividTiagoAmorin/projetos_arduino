//exe01
#define LED_LIGOU 2

//exe02
#define LED_SENSOR 3
#define LDR A1

//exe03
#define SENSOR_PRESENCA 4
#define SPEAKER 8

//exe04
#define SPEAKER_FUMACA 11
#define SENSOR_FUMACA A5

//exe05
#define SENSOR_TEMP A0 
#define LED_VERMELHO 7 
#define LED_VERDE 6 
#define LED_AMARELO 5 

void setup(){
  //exe01
  pinMode(LED_LIGOU, OUTPUT); //saída para ligar led
  
  //exe02
  pinMode(LED_SENSOR, OUTPUT); //saída para ligar led
  pinMode(LDR, INPUT); //entrada do valor do sensor
  
  //exe03
  pinMode(SENSOR_PRESENCA, INPUT); //entrada do valor do sensor
  pinMode(SPEAKER, OUTPUT); //saída para ligar speaker
  
  //exe04
  pinMode(SPEAKER_FUMACA, OUTPUT); //saída para ligar speaker
  pinMode(SENSOR_FUMACA, INPUT); //entrada do valor do sensor
  
  //exe05
  pinMode(SENSOR_TEMP, INPUT); //entrada do valor do sensor
  pinMode(LED_AMARELO, OUTPUT); //saída para ligar led
  pinMode(LED_VERDE, OUTPUT); //saída para ligar led
  pinMode(LED_VERMELHO, OUTPUT); //saída para ligar led
}

void exe01(){ //circuito para piscar o led
  digitalWrite(LED_LIGOU, HIGH);
  delay(1000);
  digitalWrite(LED_LIGOU, LOW);
  delay(1000);

}

void exe02(){
  int luminosidade = analogRead(LDR); //armazenar valor do sensor na variável
  
  //valor de luminosidade do sensor muito baixa acende o led
  if (luminosidade <=300) {
    digitalWrite(LED_SENSOR, HIGH);               
  }
  //valor de luminosidade do sensor muito alta apaga o led
  else {
    digitalWrite(LED_SENSOR, LOW);          
  }
}

void exe03(){
  int estadoDoSensor = digitalRead(SENSOR_PRESENCA); //armazenar valor booleano se tiver presença no sensor
  
  //tem presença liga o speaker
  if (estadoDoSensor == HIGH) {
    digitalWrite(SPEAKER, HIGH);
  }
  //não tem presença, desliga o speaker
  else {
    digitalWrite(SPEAKER, LOW);
  }
}

void exe04(){
  int fumaca = analogRead(SENSOR_FUMACA);//armazenar valor da fumaça do sensor
  
  //valor de fumaça alto, aciona o speaker
  if(fumaca >100){
    digitalWrite(SPEAKER_FUMACA, HIGH);
  }
  //valor de fumaça baixo, desliga o speaker
  else{
    digitalWrite(SPEAKER_FUMACA, LOW) ;
 }
}

void exe05(){
  float temp = analogRead(SENSOR_TEMP); //armazenar temperatura do sensor
  
  //apagar todos os leds com temperatura negativa
  if(temp <= 100){ //100 == -1º
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_VERMELHO, LOW);
  }
  //acenter led amarelo com temperatura de 0º a 20º
  else if(temp > 100 && temp <= 143){ //100 == -1º ... 143 == 20º
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_VERMELHO, LOW);
  }
  //acender led verde com temperatura de 21º a 29º
  else if(temp > 143 && temp <= 162){ //143 == 20º ... 162 == 29º
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_VERMELHO, LOW);
  }
  //acender led vermelho com temperatura de 30º para cima
  else if(temp > 162){ //162 == 29º
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_VERMELHO, HIGH);
  }
}

void loop(){
  exe01();
  exe02();
  exe03();
  exe04();
  exe05();
}
