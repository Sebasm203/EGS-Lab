#include <stdio.h>

int main() {
  int a=17, b=5;

  printf("Sum is %d\n", a+b);
  printf("Subtraction is %d\n", a-b);
  printf("Multiplication is %d\n", a*b);
  printf("Division is %d\n", a/b);            // Integer division: 3 (round down)
  printf("Modulo is %d\n", a%b);       // Remainder: 2

  /*
  Odd value:   n%2 -->1
  Even value:  n%2 -->0
  Multiple of x?    n%x -->0
  */


  return 0;
}
