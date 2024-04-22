#include <stdio.h>

int main ( void ) {
    int n = 10, m = 10, S = 0;
    // scanf( "%d %d", &n, &m );

    for ( int i = 0; i <= n; i++ ) 
        for ( int j = 0; j <= m; j++ ) {
            if ( i + j >= 10 ) 
                break; //goto exit_sum;    

            S += i + j;
        }


    // exit_sum:
    printf( "%d\n", S );

    return 0;
}