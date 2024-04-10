#include <stdio.h>

int main(void)
{
    int h, w;
    scanf("%d %d", &h, &w);

    printf( "%.2f", (double) h / (double) w  );
    
    return 0;
}