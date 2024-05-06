#include <stdio.h>
#define AMNT 20

int prod_ar( int * arr, int len ) {
    int prod = 1;
    for ( int i = 0; i < len; ++i ) 
        prod *= arr[ i ];
    return prod;
}

int main( void ) {
    int ar[ AMNT ] = { 0 };
    size_t count = 0;
    size_t sz_ar = sizeof( ar ) / sizeof( *ar );

    while ( count < sz_ar && scanf( "%d", &ar[ count ] ) == 1 )
      count ++ ;

    int res = prod_ar( ar, count );
    printf( "%d\n", res );

    return 0;
}

/*

Подвиг 3. Напишите программу, которая читает из входного потока в массив несколько целочисленных значений 
(не менее одного и не более 20), 
записанных в одну строчку через пробел. 

Объявите функцию с именем prod_ar и следующими параметрами (порядок параметров должен соблюдаться):

целочисленный массив;
длина массива (число обрабатываемых элементов).

Функция prod_ar должна вычислять произведение элементов переданного массива и 
возвращать вычисленное значение в виде целого числа.

В функции main вызовите функцию prod_ar для чисел, 
прочитанных из входного потока. 

Возвращенное функцией prod_ar значение выведите в консоль в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.4.3

Sample Input:

1 2 3 4 5 6 7 8
Sample Output:

40320

https://stepik.org/lesson/1191305/step/5?unit=1204293

*/