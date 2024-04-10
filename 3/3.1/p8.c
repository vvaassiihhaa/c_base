#include <stdio.h>

int main( void ) {
    float f;
    scanf( "%f", &f );
    
    int res = f >= -10 && f < 0 || f > 5 && f <= 12 ;
    printf( "%d", res );     
    
    return 0;
}   

// 1, если число принадлежит диапазону [-10; 0) или (5; 12], и 0 в противном случае.