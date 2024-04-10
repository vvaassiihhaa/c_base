#include <stdio.h>

int main( void ) {
    float f1, f2;
    scanf( "%f %f", &f1, &f2 );
    int res1 = f1 > -5 && f1 < 10;
    int res2 = f2 > 0 && f2 < 7;    
    printf( "%d", res1 && res2 );
    
    return 0;
}   