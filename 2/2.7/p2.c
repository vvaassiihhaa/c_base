#include <stdio.h>

int main(void) {
    int angle;
    scanf("%d", &angle);

    printf( "%d", angle % 360 );
    return 0;
}