#include <stdio.h>

int main() {
  int x, y, result;

  printf("Enter first integer: ");
  scanf("%d", &x);

  printf("Enter second integer: ");
  scanf("%d", &y);

  result = x + y;

  printf("The result is %d\n\n", result);

  // Modify to print like: The sum of 12 and 8 is 20
  printf("The sum of %d and %d is %d\n\n", x, y, result);


  return 0;
}

/*
int: integer (negative, zero, positive); no decimal part

%d: Conversion Specifier         (d: decimal)
%x:                              (x: hexadecimal, base 16)

&: Address operator
&x: address of x in the memory

scanf("%d", &x);
Read a number from the keyboard, convert it to decimal, place it
in the memory at address of x.
ASCII of 1: 49, ASCII of 2: 50
User types: 12, computer receives 2 bytes (49, 50) --> 12 is stored at address of x

scanf: scan formatted
printf: print formatted

String:   "ABC"
Format control string:   "Result is %d"


Identifier (variable name, or function name)
 - Letters, numbers, underscore
 - Starts with letter or underscore
 - Case sensitive

 int _a;   Good
 int 3a;   Bad
 int a_3;  Good
 int A1, a1;    Good

Style: (number of books)
 int number_of_books;
 int numberOfBooks;




















*/
