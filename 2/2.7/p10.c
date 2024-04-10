#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    printf( "%d", ( rect_width / w ) * ( rect_height / h ) );

    return 0;
}