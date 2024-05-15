int leds[10]={2,3,4,5,6,7,8,9,10,11};
// vetor com os endereços dos leds

void setup() {
  for(int i=0;i<10;i++) pinMode(leds[i],OUTPUT);
  // não precisa{} pq ele está em uma linha só
}
 
void loop() {
  for(int i=0;i<10;i++){
    digitalWrite(leds[i],HIGH);
    delay(250);
    if(i<10){
      digitalWrite(leds[i],LOW);
    }
  }
}