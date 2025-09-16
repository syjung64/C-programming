#include <stdio.h>

int
main(void) {
    char word[] = "Kpop";                // 문자열 변수

    printf("word : %s, size_word : %d\n", word, sizeof(word));
 
    printf("[%c] [%c] [%c] [%c] [%c] \n", word[0], word[1], word[2], word[3], word[4]);
    printf("[%d] [%d] [%d] [%d] [%d] \n", word[0], word[1], word[2], word[3], word[4]);


    return 0;
}