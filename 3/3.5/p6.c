#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char res;
    res = bits | 0b00010101;
     printf("%d\n", res);

    return 0;
}

// Необходимо включить 4, 2 и 0 биты
// 76543210
// 00010101