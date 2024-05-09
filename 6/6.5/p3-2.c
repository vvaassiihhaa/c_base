#include <stdio.h>
#include <string.h>

void copy_string( char* dst, size_t max_len_dst, const char* src, int ( * nado ) ( const char ) );

int is_nado( const char x );

int main( void ) {
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    copy_string( str2, sizeof( str2 ), str, is_nado );
    puts( str2 );

    return 0;
}

int is_nado( const char x ) {
    return strchr( "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", x ) == NULL;
}

void copy_string( char* dst, size_t max_len_dst, const char* src, int ( * nado ) ( const char ) ) {
    size_t src_len = strlen( src ); // ДЛИНА ИСТОЧНИКА
    int i = 0, j = 0;
    for ( ; i < src_len && j < max_len_dst - 1; ++i ) 
        if ( nado( src[i] ) )
            dst[ j++ ] = src[ i ];  // ЕСЛИ НАДО - копируем один символ 

    dst[j] = '\0'; // добавляем символ завершения строки
}

// HelloСергею Балакиреву и всем остальным ученикам!