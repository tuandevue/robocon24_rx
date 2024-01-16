#include "khaibaobien.h"

// high = trạng thái tiến
// low  = quay lùi

void Stop()
{
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, LOW);
  digitalWrite(dir3, LOW);
  digitalWrite(dir4, LOW);
  analogWrite (pwm1, 0);
  analogWrite (pwm2, 0);
  analogWrite (pwm3, 0);
  analogWrite (pwm4, 0);
}
void Tien()
{
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,HIGH);
  digitalWrite(dir3,HIGH);
  digitalWrite(dir4,HIGH);
  analogWrite (pwm1, 70);
  analogWrite (pwm2, 70);
  analogWrite (pwm3, 70);
  analogWrite (pwm4, 70);
}
void Lui()
{
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, LOW);
  digitalWrite(dir3, LOW);
  digitalWrite(dir4, LOW);
  analogWrite (pwm1, 70);
  analogWrite (pwm2, 70);
  analogWrite (pwm3, 70);
  analogWrite (pwm4, 70);
}
void Trai()
{
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  digitalWrite(dir3, LOW);
  digitalWrite(dir4, HIGH);
  analogWrite (pwm1, 70);
  analogWrite (pwm2, 70);
  analogWrite (pwm3, 70);
  analogWrite (pwm4, 70);
}
void Phai()
{
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
  digitalWrite(dir3, HIGH);
  digitalWrite(dir4, LOW);
  analogWrite (pwm1, 70);
  analogWrite (pwm2, 70);
  analogWrite (pwm3, 70);
  analogWrite (pwm4, 70);
}
void XoayTrai()
{
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  digitalWrite(dir3, HIGH);
  digitalWrite(dir4, LOW);
  analogWrite (pwm1, 50);
  analogWrite (pwm2, 50);
  analogWrite (pwm3, 50);
  analogWrite (pwm4, 50);
}
void XoayTrai()
{
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
  digitalWrite(dir3, LOW);
  digitalWrite(dir4, HIGH);
  analogWrite (pwm1, 50);
  analogWrite (pwm2, 50);
  analogWrite (pwm3, 50);
  analogWrite (pwm4, 50);
}
void Run1(){
  
}
