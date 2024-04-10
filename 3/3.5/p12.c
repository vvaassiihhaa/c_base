#include <stdio.h>

int main( void ) {
    unsigned int flags, mask;
    scanf("%u %u", &flags, &mask);
    
    printf( ( flags & mask ) != 0 ? "yes" : "no" );
    
    return 0;    
}