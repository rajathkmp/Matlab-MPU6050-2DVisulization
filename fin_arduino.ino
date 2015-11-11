

#include "Wire.h"
#include "I2Cdev.h"
#include "MPU6050.h"
#include "Servo.h"
MPU6050 mpu;
int16_t a, b, c;
int16_t d, e, f;
long res, val2;
long prevVal;
void setup() 
{
    Wire.begin();
    Serial.begin(9600);
    mpu.initialize();
}
void loop() 
{
    mpu.getMotion6(&a, &b, &c, &d, &e, &f);
    res = map(b, -17000, 17000, 0, 180);
    Serial.println(res);
    delay(10);
}
