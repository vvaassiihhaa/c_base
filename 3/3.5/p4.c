#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char mask = 0b00101000; // 40

    if ((bits & mask) == mask)
        printf( "%d\n", bits);
    else
        printf( "%d\n", -1 );

    return 0;
}