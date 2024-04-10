#include <stdio.h>

int main( void ) {
    float length, width;
    scanf( "%f %f", &length, &width );
    printf( "Периметр: %.1f", length + length + width + width );
    
    return 0;
}