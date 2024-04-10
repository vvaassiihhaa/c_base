#include <stdio.h>

int main(void)
{
    int rect_width = 1280, rect_height = 720;
    int w = 8, h = 8;
    scanf("%d; %d", &w, &h);

    printf( "%d %d", rect_width % w, rect_height % h );

    return 0;
}