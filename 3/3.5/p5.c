#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char res;
    res = (bits & 0b00111111);
    printf("%d\n", res);

    return 0;
}