#include <stdio.h>

int main ( void ) {
    int d = 10;
    int *gpt = &d;

    printf( "gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d );

    *gpt = 75432;

    printf( "gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d );

    return 0;
}

// printf( "gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d );