#include <stdio.h>
int main( void ) {
    int n, s = 0;
    scanf( "%d", &n );
    while ( n > 0 ) {
        s += n * n;
        n--;
    }
    printf( "%d\n", s );
    return 0;
}
