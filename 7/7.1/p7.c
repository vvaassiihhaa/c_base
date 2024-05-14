#include <stdio.h>

double mean_ar(const int *ar, size_t len_ar, int ( *nado ) ( int ) )
{
    int S = 0;
    int count = 0;
    for ( size_t i = 0; i < len_ar; ++i ) {
        if ( nado( ar[i] ) ) {
            S += ar[i];
            ++count;
        }
    }
    double res = (double) S / count;
    return res;
}

int is_nado( int );

int main(void)
{
    int marks[20] = {0};
    int x;
    size_t i = 0;
    while( scanf("%d", &x) == 1 ) {
        if ( i < 20 )
            marks [ i++ ] = x;
    }

    double mean = mean_ar( marks, i, is_nado );
    printf( "%.1f", mean );

    return 0;
}

int is_nado( int a ) {
    return ( a >= 1 && a <= 5 );
}
