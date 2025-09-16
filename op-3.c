#include <stdio.h>

int main(void)
{
     int a, b;

     a = 5;
     a++;
     printf("%d\n", a);

     a = 5;
     b = ++a + 2;
     printf("a:%d, b:%d\n", a, b);
     
     a = 5;
     b = a++ + 2;
     printf("a:%d, b:%d\n", a, b);

     return 0;
}