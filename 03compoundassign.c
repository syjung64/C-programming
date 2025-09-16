#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;

    //printf("두 정수를 입력 >> ", &x, &y);
    printf("두 정수를 입력 >> \n");
    scanf("%d %d",&x, &x);

    printf("%d\n", x += y);
    printf("%d %d\n", x, y);
    printf("%d\n", x -= y);
    printf("%d %d\n", x, y);

    return 0;
}