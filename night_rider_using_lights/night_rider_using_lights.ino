int x=100;

void setup() { 
pinMode (3,OUTPUT);
pinMode (4,OUTPUT);
pinMode (5,OUTPUT);
pinMode (6,OUTPUT);
pinMode (7,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
 for (int i=3; i<8; i++)
 {
digitalWrite(i,HIGH);
delay(x);
digitalWrite(i-1,LOW);
delay(x);
 }
for (int i=7; i>2;i--){
digitalWrite(i,HIGH);
delay(x);
digitalWrite(i+1,LOW);
}
}
