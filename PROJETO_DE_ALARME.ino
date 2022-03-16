int LDR =7;
int BUZZER =6;

void setup() {
  // put your setup code here, to run once:

pinMode (LDR,INPUT);
pinMode (BUZZER,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura=digitalRead(LDR);
if (leitura==HIGH){
  digitalWrite(BUZZER,LOW);
}else{
digitalWrite(BUZZER,HIGH);
}

}
