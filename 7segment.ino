void setup() {
  // put your setup code here, to run once:
int a=13;
int b=12;
int c=11;
int d=10;
int e=9;
int f=8;
int g=7;
int i=0;
for(i=7;i<=13;i++)
{
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
int zero[]={8,9,10,11,12,13};
for(int i=0;i<6;i++)
{
  digitalWrite(zero[i],HIGH);
}
delay(100);
for(int i=0;i<6;i++)
{
  digitalWrite(zero[i],LOW);
}
delay(100);
int one[]={12,11};
for(int i=0;i<2;i++)
{
  digitalWrite(one[i],HIGH);
}
delay(100);
for(int i=0;i<2;i++)
{
  digitalWrite(one[i],0);
}
delay(100);
int two[]={13,12,7,9,10};
for(int i=0;i<5;i++)
{
  digitalWrite(two[i],1);
}
delay(100);
for(int i=0;i<5;i++)
{
  digitalWrite(two[i],0);
}
delay(100);
int three[]={13,12,7,11,10};
for(int i=0;i<5;i++)
{
  digitalWrite(three[i],1);
}
delay(100);
for(int i=0;i<5;i++)
{
  digitalWrite(three[i],0);
}
delay(100);
int four[]={8,7,12,11};
for(int i=0;i<4;i++)
{
  digitalWrite(four[i],1);
}
delay(100);
for(int i=0;i<4;i++)
{
  digitalWrite(four[i],0);
}
delay(100);
int five[]={13,8,7,11,10};
for(int i=0;i<5;i++)
{
  digitalWrite(five[i],1);
}
delay(100);
for(int i=0;i<5;i++)
{
  digitalWrite(five[i],0);
}
delay(100);
int six[]={13,11,10,9,8,7};
for(int i=0;i<6;i++)
{
  digitalWrite(six[i],1);
}
delay(100);
for(int i=0;i<6;i++)
{
  digitalWrite(six[i],0);
}
delay(100);
int seven[]={13,12,11};
for(int i=0;i<3;i++)
{
  digitalWrite(seven[i],1);
}
delay(100);
for(int i=0;i<3;i++)
{
  digitalWrite(seven[i],0);
}
delay(100);
int eight[]={7,8,9,10,11,12,13};
for(int i=0;i<7;i++)
{
  digitalWrite(eight[i],1);
}
delay(100);
for(int i=0;i<7;i++)
{
  digitalWrite(eight[i],0);
}
delay(100);
int nine[]={8,7,13,12,11,10};
for(int i=0;i<6;i++)
{
  digitalWrite(nine[i],1);
}
delay(100);
for(int i=0;i<6;i++)
{
  digitalWrite(nine[i],0);
}
delay(100);
}
