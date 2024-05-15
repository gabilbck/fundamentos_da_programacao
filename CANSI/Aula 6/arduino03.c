int leds[10]={2,3,4,5,6,7,8,9,10,11};
 
void setup() {
  for(int i=0;i<10;i++) pinMode(leds[i],OUTPUT);
}
 
void loop() {
  for(int i=0;i<10;i++){
    digitalWrite(leds[i],HIGH);
    delay(250);
    digitalWrite(leds[i],LOW);
    delay(250);
  }
  for(int i=9;i>=0;i--){
    digitalWrite(leds[i],HIGH);
    delay(250);
    digitalWrite(leds[i],LOW);
    delay(250);
  }
    
}