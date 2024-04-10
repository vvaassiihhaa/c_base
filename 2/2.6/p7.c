#include <stdio.h>

int main(void)
{
    int a1; // первый член прогрессии
    int a50; // 50-й член прогрессии

    scanf("%d, %d", &a1, &a50);

    printf( "%d", 25 * ( a1 + a50 ) );
    return 0;
}