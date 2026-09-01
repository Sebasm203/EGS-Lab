#include <stdio.h>

int main() {
  // Put string
  puts("hello world!\n");



  printf("Enter an integer: ");
  scanf("%d", &x);

  // User enters: 12 20 30 40 --> input buffer (memory)
  // 12 goes into x   
  // 20 30 40 remain in the buffer

  return 0;
}
