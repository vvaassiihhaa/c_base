#include <stdio.h>

int main(void)
{
    short a, b, init_a, init_b;

    scanf("%hd, %hd", &a, &b);
    init_a = a; init_b = b;

    short c;
    short *ptr_a = &a;
    short *ptr_b = &b;
    c = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = c;

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 8. Продолжите программу.

Объявите указатель ptr_a на переменную a и указатель ptr_b на переменную b.

Выполните обмен значениями переменных a и b через указатели ptr_a и ptr_b.

P. S. В консоль ничего выводить не нужно.

https://stepik.org/lesson/1191288/step/10?unit=1204276

*/