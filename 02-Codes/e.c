#include <stdio.h>

int main() {
  int x, y;

  //printf("Enter two integers: ");
  //scanf("%d %d", &x, &y);

  // User should enter:    22/33
//  printf("Enter two integers in the format x/y: ");
//  scanf("%d/%d", &x, &y);

  // User should enter:    22_33
  printf("Enter two integers in the format x_y: ");
  scanf("%d_%d", &x, &y);

  printf("The result is %d\n\n", x+y );

 

  return 0;
}

