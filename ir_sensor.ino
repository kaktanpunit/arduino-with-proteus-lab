void setup() {
  // put your setup code here, to run once:
int led=13;
int ir=2;
pinMode(13,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int z=digitalRead(2);
if(z==1)
digitalWrite(13,1);
if(z==0)
digitalWrite(13,0);
}
