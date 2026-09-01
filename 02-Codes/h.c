#include <stdio.h>

int main() {
  int x=2, y=0;

  printf("Result is %d\n", x/y);

  printf("Program has terminated!!!\n");

  return 0;
}







/*




My executable
Operating System (OS) ... Windows/Linux/Mac  provides services (print, scan)
Hardware (CPU...)



My executable
OS                         Crashes the program
Hardware (CPU...)          Divide/0? Raises an exception (unusual event)



My executable
OS                         OS lets the program continue in C language
                           (results may be wrong; it's up to the programmer to check)
Hardware (CPU...)          Integer value (0-65535); addition results in 80,000
                           CPU raises an overflow exception


Another example of exception: bad memory address


*/
