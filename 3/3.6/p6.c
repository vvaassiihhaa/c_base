#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int r1 = rand();
    int r2 = rand();
    int r3 = rand();
    int r4 = rand();
    int r5 = rand();

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 6. Продолжите программу, 
которая при каждом новом запуске генерирует разные последовательности
из пяти псевдослучайных чисел и сохраняет их в целочисленные переменные r1, r2, r3, r4, r5.

P.S. В консоль ничего выводить не нужно. 

*/