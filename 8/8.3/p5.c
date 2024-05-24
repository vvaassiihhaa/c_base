#include <string.h>
#include <stdio.h>

int main( void ) {
    char buff[512];

    // FILE* fp = stdin; // имитация отрытого файлового входного потока 
    char c[] = "Moscow   Ufa Samara  Ulianovsk";

    int count_words = 1;
    int i = 1;
    while( c[i] != '\0' ) {
        if ( c[i] != ' ' && c[i - 1] == ' ' ) // первая буква слова
            count_words++;
        i++;
    }

    printf( "%d", count_words );

    return 0;
}