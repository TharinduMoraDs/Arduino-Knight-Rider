void setup() {
  
  for(int pin=2;pin<14;pin++){
    
    pinMode(pin, OUTPUT); //defind output pins
    
      }
  
}

void loop() {

  int t=20; //20 miliseconds

  for(int i=2;i<14;i++){
    
    digitalWrite(i,HIGH);
    delay(t);

     digitalWrite(i+1,HIGH);
    delay(t);

     digitalWrite(i+2,HIGH);
    delay(t);

     digitalWrite(i,LOW);
    delay(t);

    digitalWrite(i+1,LOW);
    delay(t);
    }

     for(int i=13;i>1;i--){
    digitalWrite(i,HIGH);
    delay(t);

     digitalWrite(i-1,HIGH);
    delay(t);

     digitalWrite(i-2,HIGH);
    delay(t);

     digitalWrite(i,LOW);
    delay(t);

    digitalWrite(i+1,LOW);
    delay(t);
    }


}
