#include <iso646.h>
#include <stdio.h>

int main(void) {
    int d;
    scanf("%d", &d);
    printf( ( d >= 3000 and  d<=3999 ) ? "yes" : "no" );

    return 0;
}    
