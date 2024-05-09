#include <stdio.h>

#define SIZE 10

void filter( int dst[], size_t size_dst,
       const int src[], size_t size_src,
       int ( * is_correct ) (int) ){

    for( int i = 0; i < size_dst; ++i )
        dst[ i ] = 0;
    
    for ( int i = 0, j = 0; i < size_src; ++i )
    {
        if ( is_correct( src[ i ] ) )
            dst[ j++ ] = src[ i ];
    }

}

int is_even( int x );

int main ( void ) {
    int digits[] = { -3, 4, 10, 11, -5, 3 };
    int result[ SIZE ];

    filter( result, SIZE, digits, sizeof( digits ) / sizeof( *digits ), is_even );

    for ( int i = 0; i < SIZE; ++i )
    {
        printf( "%d ", result[ i ] );
    }

    return 0;
}

int is_even( int x ) {
    return x % 2 == 0;
}