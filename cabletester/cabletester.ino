#define PINCOUNT 9//number of pins

void setup() {
  // put your setup code here, to run once:
for(int i=2;i<14;i++)pinMode(i,OUTPUT);
}
unsigned long x=0;
void loop() {
  // put your main code here, to run repeatedly:
for(int i=2;i<14;i++)digitalWrite(i,LOW);
delay(1250);
digitalWrite(2+(x%PINCOUNT),HIGH);
delay(1250);
x++;
}
