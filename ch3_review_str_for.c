#include <stdio.h>

int
main(void) {
    char word[] = "Kpop";                // 문자열 변수

    printf("word : %s, size_word : %d\n", word, sizeof(word));
 
    for (int i = 0; i < 5; i = i + 1) {
        printf("([%c] [%d]) ", word[i], word[i]);
    }
    printf("\n");
    
    return 0;
}