#include <stdio.h>

int get_max( int, int );
int get_min( int, int );

int main(void) {
    int a, b, t;
    scanf( "%d, %d, %d", &a, &b, &t );

    int res;
    if ( t == 1 )
      res = get_max( a, b );
    else
      res = get_min( a, b );  

    printf( "%d", res );  

    return 0;
}

int get_max( int a, int b ) {
    return a > b ? a : b;
}

int get_min( int a, int b ) {
    return a < b ? a : b;
}

/*

Подвиг 5. Продолжите программу. Перед функцией main объявите два прототипа функций:

get_max: для вычисления максимального из двух переданных целых чисел (возвращается целое число);
get_min: для вычисления минимального из двух переданных целых чисел (возвращается целое число).
Реализации функций пропишите после функции main. 

В функции main вызовите функцию get_max для переменных a и b, если значение переменной t равно 1.
Иначе должна вызываться функция get_min для тех же переменных a и b. 
 
Выведите в консоль вычисленное значение в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.3.5

Sample Input:

-5, 10, 1
Sample Output:

10

https://stepik.org/lesson/1191304/step/7?unit=1204292

*/