#include <iso646.h>
#include <stdio.h>

int main(void)
{
    short type = 0;
    double w, h;

    if(scanf("%hd %lf %lf", &type, &w, &h) != 3) {
        printf("Input error.");
        return 0;
    }

    if (type != 1 and type != 2) printf( "%d", -1 ); // (если type не 1 и не 2), вернуть значение -1
        else printf( "%.1lf\n", ( type == 1 ) ? (w * h) : 2* (w + h) );

    return 0;
}