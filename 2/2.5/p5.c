#include <stdio.h>

int main(void)
{
    int a;
    short b;
    float c;
    double d;

    // здесь продолжайте программу
    scanf( "%d %hd %f %lf", &a, &b, &c, &d );
    printf( "%d %d %.2f %.2lf\n", a, b, c, d );

    return 0;
}