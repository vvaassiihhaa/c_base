#include <stdio.h>
#include <stdlib.h>

enum colors { red, green, blue };
int is_even( int x );

typedef int (*PTR_EVEN)(int);
typedef char (*PTR_AR_2D)[4];

int main( void ) 
{
    char ar_2d[5][4] = {0};
    PTR_AR_2D ptr_2d = ar_2d;
    // char (*ptr_2d)[4] = ar_2d;

    ar_2d[1][2] = 5;
   
    PTR_EVEN func_even = is_even;
    // int (*func_even)(int) = is_even;    
 
    printf("%d\n", func_even(2));
    printf("%d\n", func_even(3));
 
    printf("%d\n", ptr_2d[1][2]);

    printf("red = %d, green = %d, blue = %d\n", red, green, blue);
    return 0;
}

int is_even(int x)
{
    return x % 2 == 0;
}