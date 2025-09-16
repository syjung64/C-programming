#include <stdio.h>

int main(void)
{
     int a, b, c;

     a = 5;
     printf("%d\n", a);

     printf("%d\n", a = 7);

     a = b = c = 9;
     printf("a:%d, b:%d, c:%d\n", a, b, c);

     a += 2;
     printf("%d\n", a); 

     b %= 2;
     printf("%d\n", b); 

     return 0;
}