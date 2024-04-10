#include <stdio.h>

int main( void ) {
    float f;
    scanf( "%f", &f );
    
    int res = f >= -5.45 && f <= 10.37;
    printf( "%d", res );     
    
    return 0;
}   

// 1, если число принадлежит диапазону [-5.45; 10.37], и 0 в противном случае