
#include<Servo.h>
Servo servo1;
int valor;
void setup() {
 servo1.attach(3);

}

void loop() {
 valor = analogRead(0);
 valor = map(valor,0,1023,0,180);
 servo1.write(valor);
 delay(15);
}
