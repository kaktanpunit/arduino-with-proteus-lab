#include<Servo.h>
Servo servo_test;
int angle=0;
void setup() {
  // put your setup code here, to run once:
servo_test.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
for(angle=0;angle<180;angle++)
{
  servo_test.write(angle);
  delay(15);
}
delay(1000);
for(angle=180;angle>=1;angle--)
{
  servo_test.write(angle);
  delay(15);
}
delay(1000);
}
