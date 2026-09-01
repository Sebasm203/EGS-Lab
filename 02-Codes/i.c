#include <stdio.h>

int main() {
  int a=4;

  printf("Value of a: %d\n", a);
  printf("Address of a: %p\n", &a);  // %p: pointer: address

  // Output:  0x7ffd0d396084 address is 6 Bytes = 48-bit   

  return 0;
}



/*
Memory Concepts
Variables are located in the memory; each  variable has an address

x: 4  @address 200
y: 10 @address 300

In my code:
x: value of x: 4
&x: address of x: 200

y   10
&y  300




*/
