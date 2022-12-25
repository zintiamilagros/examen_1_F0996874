#include "mbed.h"
#define sw1 p5
#define sw2 p6
#define sw1 p7
#define sw2 p8
#define sw1 p9

DigitalOut led(LED1);
#define RED_LED p10
#define BLUE_LED p11
#define YELOW_LED p12
DigitalIn b1(sw1);
DigitalIn b2(sw2);
DigitalIn b3(sw1);
DigitalIn b4(sw2);
DigitalIn b5(sw1);

DigitalOut rled(RED_LED);
DigitalOut bled(BLUE_LED);
DigitalOut yled(YELOW_LED);

int main() {
  while (b1.read() == 0) {
    wait_ms(500);
  }
  
  printf("holi %d\n");
  int a = 3;
  int b = 8;
  int c = 1;
  printf (" El orden es %d, %d, %d. \n", a, b, c);
  if (a < b)
  {
    if (a < c)
    {
      if (b < c) printf (" El orden es %d, %d, %d. \n", a, b, c);
      else printf (" El orden es %d, %d, %d.\n", a, c, b);
    } else {
      printf (" El orden es %d, %d, %d.\n", c, a, b);
    }
  }
  else
  {
    if (b < c)
    {
      if (a < c) printf (" El orden es %d, %d, %d.\n", b, a, c);
      else printf (" El orden es %d, %d, %d.\n", b, c, a);
    } else {
      printf (" El orden es %d, %d, %d.\n", c, b, a);
    }
  }
  while (b2.read() == 0) {
    wait_ms(500);
  }
    rled = b2; wait_ms(500);rled = !b2;wait_ms(500);
    rled = b2; wait_ms(500);rled = !b2;wait_ms(500);
    rled = b2; wait_ms(500);rled = !b2;wait_ms(500);
    rled = b2; wait_ms(500);rled = !b2;wait_ms(500);
    yled = b2;
    bled = b2;

}