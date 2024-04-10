#include <stdio.h>

int main(void) {
    int width, height;
    scanf("%d %d", &width, &height);
    int border = ( width > height )? width : height;
    printf("%d\n", border +8 );

    return 0;
} 