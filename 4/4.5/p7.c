#include <stdio.h>

int main(void)
{
    short a, b;

    scanf("%hd", &b);

    short *ptr_a = &a;
    *ptr_a = b;

    printf("%hd\n", a);

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 7. Продолжите программу.

Объявите указатель на переменную a с именем ptr_a.

Через указатель ptr_a присвойте переменной a значение переменной b.

Выведите в консоль значение переменной a в виде одного целого числа.

https://stepik.org/lesson/1191288/step/9?unit=1204276

*/