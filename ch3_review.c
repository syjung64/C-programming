#include <stdio.h>
#define BONUS 10                     // 정수형 상수 – 수정 불가
#define NAME "dongyang"             // 문자열 상수 – 수정 불가

int
main(void) {
    int base = 100;                    // 정수형 변수
    double rate = 3.4567;              // 실수형 변수
    char ch = 'A';                     // 문자 변수
    char word[] = "Hi";                // 문자열 변수

    printf("base : %d, size_base : %d\n", base, sizeof(base));
    printf("rate : %.2lf%%, size_rate : %d\n", rate, sizeof(rate));
    printf("ch : %c (%d), size_ch : %d\n", ch, ch, sizeof(ch));
    printf("word : %s, size_word : %d\n", word, sizeof(word));

    printf("BONUS : %d, size_BONUS : %d\n", BONUS, sizeof(BONUS));
    printf("NAME : %s, size_NAME : %d\n", NAME, sizeof(NAME));

    return 0;
}