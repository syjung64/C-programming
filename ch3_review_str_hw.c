#include <stdio.h>

int
main(void) {
    char word[] = "Kpop";                // 문자열 변수

    /* 문자열 변수 word[]의 내용을 “kpop”로 변경하고,
       변경된 문자열 변수 word를 출력하여 변경 내용을 확인하세요 */

    word[0] = 'k';

    printf("%s", word);

    return 0;
}