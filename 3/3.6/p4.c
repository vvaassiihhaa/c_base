#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int a1 = rand() % ( b - a + 1 ) + a;   
    int a2 = rand() % ( b - a + 1 ) + a;
    int a3 = rand() % ( b - a + 1 ) + a;
    int a4 = rand() % ( b - a + 1 ) + a;
    int a5 = rand() % ( b - a + 1 ) + a;
    int a6 = rand() % ( b - a + 1 ) + a;
    int a7 = rand() % ( b - a + 1 ) + a;
    int a8 = rand() % ( b - a + 1 ) + a;
    int a9 = rand() % ( b - a + 1 ) + a;
    int a10 = rand() % ( b - a + 1 ) + a;

    printf("%d %d %d %d %d %d %d %d %d %d", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);

    return 0;
}


/*

Подвиг 4. Продолжите программу, которая генерирует псевдослучайные целые числа
в диапазоне от a до b (включительно).
Числа a и b (a < b) считываются из входного потока.
Для формирования диапазона значений используйте
арифметическую операцию вычисления целого остатка от деления:

y = rnd % ( b - a + 1 ) + a

Сгенерируйте десять псевдослучайных чисел и выведите их в консоль в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.4

Sample Input:

-10 -3
Sample Output:

-9 -7 -4 -6 -9 -6 -4 -4 -8 -10


Feat 4. Continue the program that generates pseudorandom integers
in the range from a to b (inclusive).
The numbers a and b (a < b) are read from the input stream.
To generate a range of values, use the
arithmetic operation to calculate the integer remainder from division:

y = rnd % ( b - a + 1 ) + a

Generate ten pseudo-random numbers and output them to the console in one line with a space.


*/