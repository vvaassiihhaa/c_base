#include <stdio.h>

int main(void)
{
    char symbol;
    if(scanf("%c", &symbol) != 1) {
        printf("Input error.");
        return 0;
    }

    switch(symbol) {
        case 'a': symbol = 'A'; break;
        case 'b': symbol = 'B'; break;
        case 'c': symbol = 'C'; break;
        case 'd': symbol = 'D'; break;
        case 'e': symbol = 'E'; break;
        case 'f': symbol = 'F';           
    }        

    printf("%c", symbol);

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}