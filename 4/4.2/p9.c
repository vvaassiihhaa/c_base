#include <stdio.h> // gpt

int main( void ) {
    int digit, result = 0;
    
    while ( scanf( "%d", &digit ), digit != 0 )
        result = result * 10 + digit;
    
    printf( "%d\n", result );

    return 0;
}
