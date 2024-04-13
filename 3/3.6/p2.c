#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int d1, d2, d3, d4;
    d1 = rand();
    d2 = rand();
    d3 = rand();
    d4 = rand();

    printf("%d %d %d %d\n", d1, d2, d3, d4);

    return 0;
}

/*

Подвиг 2. Продолжите программу. 
С помощью функции rand() сгенерируйте четыре псевдослучайных числа,
присвойте их переменным и по порядку выведите их в консоль в одну строчку через пробел.

Using the rand() function, 
generate four pseudo-random numbers, 
assign them to variables, 
and then output them sequentially in one line separated by spaces."

*/