#include <stdio.h>

int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);

    unsigned char res;    
    res = bits ^ 0b00001001;
    printf("%d\n", res);
    
    return 0;
}

// 76543210
// 00001001