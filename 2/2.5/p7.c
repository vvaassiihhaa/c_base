#include <stdio.h>

int main(void)
{
    // здесь продолжайте программу
    int d1, d2;
    float d3;
    scanf( "%d,%d,%*f,%f", &d1, &d2, &d3 );
    printf( "%d %d %.2f", d1, d2, d3 );
    return 0;
}