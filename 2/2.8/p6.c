#include <stdio.h>

int main( void ) {
    int s, m; // процент это s * m / 100 
    scanf( "%d %d", &s, &m );

    double lowprice = (double)s - (double)s * (double)m / 100;
    printf( "%.2f", lowprice * 2 );
    
    return 0;
}