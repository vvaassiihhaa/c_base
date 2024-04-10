#include <stdio.h>

int main(void) {
    unsigned int n;
    scanf("%u", &n);
    n = n >> 2;
    printf("%u\n", n);

    return 0;
}
