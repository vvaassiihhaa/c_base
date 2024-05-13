#include <stdio.h>
#include <stdarg.h>

double mean( int total, ... );

int main(void)
{
    double res = mean( 7, 5, -10, 11, 0, 12, 4, 2 );
    // double res = mean( 3, 5, 34, 2 );
    printf( "%.2f\n", res );

    return 0;
}

double mean( int total, ... ) {
    va_list args;
    va_start( args, total );

    int sum = 0.0;
    for( int i = 0; i < total; i++ ) {
        sum += va_arg( args, int );
    }

    va_end( args );

    double res = (double)sum / total;
    return res;
}