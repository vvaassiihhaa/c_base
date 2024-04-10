#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf( a + b <= c ? "no" : ( a + c <= b ? "no" : ( b + c <= a ? "no" : "yes" ) ) );
    
    return 0;
}