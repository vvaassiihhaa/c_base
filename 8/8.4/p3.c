#include <stdio.h>
#include <string.h>

enum {max_lines=10, max_string_len=200};

int main(void)
{
    char text[max_lines][max_string_len];

    FILE* fp = stdin; // имитация отрытого файлового потока

    int i = 0;

    while ( !feof( fp ) && i < max_lines ) {
        fgets( ( text[ i ] ), max_string_len, fp );
        ++i;
    }

    for ( int j = 0; j < i; ++j ) {
        puts( text[ j ] );
    }

    // fclose(fp); закрывать стандартный поток не нужно

    return 0;
}
