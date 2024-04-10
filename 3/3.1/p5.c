#include <stdio.h>

int main( void ) {
    float f;
    scanf( "%f", &f );
    
    int res = ( (int)f % 5 == 0 );
    printf( "%d", res );     
    
    return 0;
}    