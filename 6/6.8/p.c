#include <stdarg.h>
#include <stdio.h>

int sum ( int count, ... );

int main ( void ) {
    int res = sum ( 5, 1, 2, 3, 4, 5 );
    printf( "res = %d\n", res );

    return 0;
}

int sum ( int count, ... ) {
    int S = 0;
    va_list arg;
    va_start( arg, count );
    for ( int i = 0; i < count; ++i )
        S += va_arg( arg, int );
    va_end( arg );

    return S;
}
