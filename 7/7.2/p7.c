#include <stdio.h>

int sum_ij( int i, int j );

int main ( void ) {
    int n, m;
    scanf( "%d %d", &n, &m );

    int res = sum_ij( n, m );
    printf( "%d\n", res );  

    return 0;
}

int sum_ij( int n, int m ) {
    int S = 0;

    for ( int i = 0; i <= n; ++i )
      for ( int j = 0; j <= m; ++ j ) {
        if ( ( i + j ) >= 20 ) {
          return S;
        } else
          S += ( i + j );
      }  

    return S;
}




