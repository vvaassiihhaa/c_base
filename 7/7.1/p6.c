#include <stdio.h>

int is_positive( int );

int main(void)
{
    int x;
    while(scanf("%d", &x) == 1) {
        if ( is_positive( x ) )
            printf( "%d ", x );
    }

    return 0;
}

int is_positive( int a ) {
    if ( a >= 0 )
        return 1;
    return 0;
}
