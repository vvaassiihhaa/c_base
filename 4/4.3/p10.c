#include <stdio.h>

int main( void ) {
    int m = 5, n = 7, k = 3;
    // scanf( "%d %d %d", &m, &n, &k );
    double S = 0;

    for( int i = 1; i <= m; i++ ) 
        for ( int j = 1; j <= n; j++ ) 
            for ( int t = 1; t <= k; t++ ) 
                S += 1.0 * j * j / ( ( i + t ) * ( i + t ) * ( i + t ) - t );

    S = S / ( m + n + k );

    printf( "%.4lf\n", S );

    return 0;
}