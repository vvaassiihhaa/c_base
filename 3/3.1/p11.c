#include <iso646.h>
#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    int rect_width_w = rect_width / w; // количество прямоугольников по горизонтали ( на рисунке 4 )
    int rect_height_h = rect_height / h; // количество прямоугольников по вертикали
    
    int res1 = rect_width % w != 0 and rect_height % h != 0;  // +1 прямоугольник
    int resX = rect_width_w * ( rect_height % h != 0 );
    int resY = rect_height_h * ( rect_width % w != 0 );
    
    printf( "%d", resX + resY + res1 );

    return 0;
}