#include <Servo.h>

int joyUD = 0;
int joyLR = 0;
int bottom_servo = 30;
int servoVal; // variable to read value from analog pin

Servo myservo1; // first servo object

void setup() {
  
  myservo1.attach(bottom_servo);
  Serial.begin(9600);

}

void loop() {
  servoVal = analogRead(A0);
  servoVal = map(servoVal, 0, 1023, 70, 180); // scale it to use it with the servo result between 70 and 180
  myservo1.write(servoVal); // sets servo position according to scaled value
  joyLR = analogRead(A1);
  Serial.print("UD = ");
  Serial.print(servoVal);
  Serial.print(", LR = ");
  Serial.println(joyLR);
  Serial.println(servoVal);   
  delay(15);

}
