#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    int a1 = rand() % ( N + 1 );
    int a2 = rand() % ( N + 1 );
    int a3 = rand() % ( N + 1 );
    int a4 = rand() % ( N + 1 );
    int a5 = rand() % ( N + 1 );
    int a6 = rand() % ( N + 1 );
    int a7 = rand() % ( N + 1 );

    printf("%d %d %d %d %d %d %d\n", a1, a2, a3, a4, a5, a6, a7);

    return 0;
}



/*

Подвиг 3. Продолжите программу, которая генерирует семь целых
псевдослучайных чисел в диапазоне от 0 до N (включительно).
Число N меньше значения константы RAND_MAX.
Для формирования диапазона значений используйте арифметическую
операцию вычисления целого остатка от деления.
Выведите сгенерированные числа в консоль в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.3

Sample Input:

5
Sample Output:

5 5 4 4 5 4 0

Continue the program that generates seven integer pseudorandom numbers in the range
from 0 to N (inclusive). The number N is less than the value of the RAND_MAX constant.
Use the arithmetic operation of calculating the integer remainder from
division to generate the range of values.
Print the generated numbers to the console in one line with a space.

*/