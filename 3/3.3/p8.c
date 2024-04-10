#include <stdio.h>

int main(void) {
    int a, b, h;
    scanf("%d, %d, %d", &a, &b, &h);
    printf("%.1f\n", (a * 1.0 + b) * h / 2 );

    return 0;
}