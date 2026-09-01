//Demo code for EGN 8/26
#include <stdio.h>

int main(void) {
    printf("123\\456\\\\78\n");
    printf("123\"456\"78\n");

    int x,y, result;

    printf("enter first integer: ");
    scanf("%d", &x);

    printf("enter second integer: ");
    scanf("%d", &y);

    

    result = x + y;

}

/* 
#include: preprocessor directive; # means preprocessor
stdio.h: standard INput/Output as keboard/monitor  (stderr:standard error)
Main code always starts in main


\n: new line
\t: tab(few spaces)
\a: alert

identifier (variable name, or function name)
-letters, numbers, underscore
starts with letter or underscore
case sensitive(a1 and A1 work seperately)

Style: (number of books)
number_books
numberOfBooks
*/