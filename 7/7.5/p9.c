#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef int ( * FUNC_CORRECT ) ( const char* );

#define MAX_WORDS   20
#define MAX_LEN     50

void to_lower_case( char *dest, const char *src );

int is_correct( const char* str );

int get_correct_words( const char (*words)[50], int count_words, FUNC_CORRECT filter );

int main( void ) {
    char str[ 1000 ] = { 0 };
    fgets( str, sizeof( str ) - 1, stdin );
    char * ptr_n = strrchr( str, '\n' );
    if ( ptr_n != NULL ) 
        *ptr_n = '\0';

    char myWords[ MAX_WORDS ][ MAX_LEN ];

    int count_words = 0;
    char * ptr = strtok( str, " " );
    while ( ptr != NULL ) {
        strcpy( myWords[ count_words++ ], ptr );
        ptr = strtok( NULL, " " );
    } // делим строку на отдельные слова

    int res;
    res = get_correct_words( myWords, count_words, is_correct );    
    printf( "%d\n", res );

    return 0;
}

int is_correct( const char* str ) {
    size_t len = strlen( str );
    char lower_str[ len + 1 ];
    to_lower_case( lower_str, str );

    if ( strstr( lower_str, "ra" ) != NULL) {
        return 1; // Найдено
    } else {
        return 0; // Не найдено
    }
} // в строке содержится фрагмент "ra"

void to_lower_case( char *dest, const char *src ) {
    while (*src) {
        *dest = tolower( (unsigned char)*src );
        dest++;
        src++;
    }
    *dest = '\0';
} // перевод БОЛЬШОЙ буквы в маленькую

int get_correct_words( const char (*words)[50], int count_words, FUNC_CORRECT filter ) {
    int count = 0;
    for ( int i = 0; i < count_words; ++i ) {
        if ( filter( words[ i ] ) ) {
            count++;
        }
    }
    return count;
}


// Radio Dennis Ritchie Ken Thompson Raichle Sergey


    // for ( int j = 0; j < i; ++j ) {
    //     printf( "%s ", myWords[ j ] );
    // }

    // puts( str );