#include <string.h>
#include <stdio.h>

typedef int ( * FUNC_CORRECT ) ( const char * );

int is_correct( const char * str );

int get_correct_words(const char (*words)[50], int count_words, FUNC_CORRECT filter);

int main() {
    char words [20][50];
    FUNC_CORRECT func = is_correct;
    int count_words = 0;
    while ( scanf( "%49s", &words[count_words] && count_words < 20 )
        ++count_words;
    
    int res = get_correct_words( words, count_words, func );
    printf( "%d\n", res );

    return 0;
}


// 7.5 - 9