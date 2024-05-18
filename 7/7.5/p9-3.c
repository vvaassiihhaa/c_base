#include <string.h>
#include <stdio.h>

typedef int ( * FUNC_CORRECT ) ( const char * );

int is_correct( const char* str );

int get_correct_words( const char (*words)[50], int count_words, FUNC_CORRECT filter );

int main ( void ) {
    FUNC_CORRECT func = is_correct;
    char words[20][50];
    int count_words = 0;
    while ( scanf( "%s", words[ count_words ] ) == 1 )
        ++count_words;

    int res = get_correct_words( words, count_words, func );
    printf( "%d", res );

    return 0;
}

int get_correct_words( const char (*words)[50], int count_words, FUNC_CORRECT filter ) {
    int count = 0;
    for ( int i = 0; i < count_words; ++i )
        if ( filter( words[ i ] ) )
            ++count;
    return count;
}

int is_correct( const char* str ) {
    return ( strstr( str, "ra") != NULL ||
             strstr( str, "Ra") != NULL ||
             strstr( str, "rA") != NULL ||
             strstr( str, "RA") != NULL );
}
