#include <stdio.h>

#define MAX_DATA_SIZE   10

int main ( void ) {

    short data [ MAX_DATA_SIZE ] = { 0 };
    FILE * fp = stdin;

    size_t count;
    count = fread( data, sizeof( short ), MAX_DATA_SIZE, fp );

    for ( size_t i = 0; i < count; ++i )
        printf( "%d ", data[ i ] );

    return 0;
}
