#include <stdio.h>

int main(void)
{
    int b1; // первый член прогрессии // ( q ^ n - 1 ) * b1 / ( q - 1 )
    int q; // знаменатель прогрессии // 2 + 2 * 8 + 2 * 8 * 8 + 2 * 8 * 8 * 8

    scanf("%d, %d", &b1, &q);

    printf( "%d", b1 + b1 * q + b1 * q * q + b1 * q * q * q );
    
    return 0;
}