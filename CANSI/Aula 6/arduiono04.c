nt leds[10]={2,3,4,5,6,7,8,9,10,11};
 
void setup() {
  for(int i=0;i<10;i++) pinMode(leds[i],OUTPUT);
}
 
void loop() {
  for(int i=0;i<10;i++){
    for(int j=0;j<=i;j++){
      digitalWrite(leds[j],HIGH);
    }
    delay(500);
    for(int j=0;j<10;j++){
      digitalWrite(leds[j],LOW);
    }
    delay(500);
  }
} 