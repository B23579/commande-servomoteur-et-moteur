int sens1=5;
int sens2=6;
void setup() {
  pinMode(sens1,OUTPUT);
  pinMode(sens2,OUTPUT);
  digitalWrite(sens1,LOW);
  digitalWrite(sens2,LOW);
  // put your setup code here, to run once:

}

void loop() {
   digitalWrite(sens1,HIGH);
  digitalWrite(sens2,LOW);
  delay(100);
   digitalWrite(sens1,LOW);
  digitalWrite(sens2,LOW);
  delay(1000);
   digitalWrite(sens1,LOW);
  digitalWrite(sens2,HIGH);
  delay(1000); 
  digitalWrite(sens1,LOW);
  digitalWrite(sens2,LOW);
  delay(1000);
  // put your main code here, to run repeatedly:

}
