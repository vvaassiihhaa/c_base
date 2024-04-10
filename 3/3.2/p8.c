#include <stdio.h>

int main( void ) {
    int a, b, c;
    scanf( "%d %d %d", &a, &b, &c );
    int D = b * b - 4 * a * c;
    if ( D >= 0 ) printf( "real roots exist" );
        else printf( "%d", D );
    
    return 0;
}
/*
эээээ.... real roots exist
*/