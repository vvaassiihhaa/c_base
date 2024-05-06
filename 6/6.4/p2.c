#include <stdio.h>

int sum_ar( int * arr, int length ) {
    int sum = 0;
    for ( int i = 0; i < length; ++i )
        sum += arr[ i ];
    return sum;
}

int main ( void ) {
    int ar[10] = { 0 }; 
    size_t count = 0;
    size_t sz_ar = sizeof( ar ) / sizeof( *ar );
    while ( count < sz_ar && scanf( "%d", &ar[ count ] ) == 1 )
      count++ ;

    int res = sum_ar( ar, count );
    printf( "%d\n", res );

    return 0;
}

/*

Подвиг 2. Напишите программу, 
 которая читает из входного потока в массив типа int десять целочисленных значений, 
 записанных в одну строчку через пробел. 
 
 Объявите функцию с именем sum_ar и следующими параметрами 
 (порядок параметров должен соблюдаться):

целочисленный массив (тип int);
длина массива (число обрабатываемых элементов).

Функция sum_ar должна вычислять сумму элементов переданного массива и возвращать
 вычисленное значение в виде целого числа.

В функции main вызовите функцию sum_ar для чисел, прочитанных из входного потока. 
Возвращенное функцией sum_ar значение выведите в консоль в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.4.2

Sample Input:

1 2 3 4 4 3 -2 -1
Sample Output:

14

https://stepik.org/lesson/1191305/step/4?unit=1204293

*/