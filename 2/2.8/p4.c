#include <stdio.h>

int main( void ) {
    int b3, l10, res;
    scanf( "%d %d", &b3, &l10 );
    res = ( b3 *= 3 ) * ( l10 -= 10 );
    printf( "%d", res );
    
    return 0;
}