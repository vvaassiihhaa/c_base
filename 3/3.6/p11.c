#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned short N;
    scanf("%hu", &N);

    int res = round( N * 2.54 );
    printf("%d\n", res);

    return 0;
}

/*

Подвиг 11. Продолжите программу решения следующей задачи.
Диагональ экрана телевизора составляет N дюймов.
Выразите диагональ экрана в сантиметрах, если в одном дюйме 2,54 см.
Результат округлите до целого числа сантиметров (по правилам математики).
Результат выведите в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.11

Sample Input:
32

Sample Output:
81

*/