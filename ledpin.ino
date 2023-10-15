

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(3,INPUT);
}
int bs=0;

void loop() {
  // put your main code here, to run repeatedly:
  
  bs=digitalRead(3);
  if (bs==HIGH){
    digitalWrite(9,HIGH);
  }
  else{
    digitalWrite(9,LOW);
  }
}
