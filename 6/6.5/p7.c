#include <stdio.h>

int sum_big2( int a, int b, int c, int d );

int main(void)
{
    int x1, x2, x3, x4;
    scanf( "%d %d %d %d", &x1, &x2, &x3, &x4 );
    printf( "%d\n", sum_big2( x1, x2, x3, x4 ) );

    return 0;
}

int sum_big2( int a, int b, int c, int d ) {
    int max = a;
    if ( b > max ) max = b;
    if ( c > max ) max = c;
    if ( d > max ) max = d;

    int max2;
    if ( b != max ) 
        max2 = b;
    else
        max2 = a;    

    if ( a > max2 && a != max ) max2 = a;
    if ( b > max2 && b != max ) max2 = b;
    if ( c > max2 && c != max ) max2 = c;
    if ( d > max2 && d != max ) max2 = d;

    return max + max2;
}

/*

Подвиг 7 (релакс). Напишите программу, 
которая читает четыре целых числа из входного потока, 
записанных в одну строчку через пробел. 

Объявите функцию с сигнатурой:

int sum_big2(int a, int b, int c, int d);

Эта функция должна складывать

 два наибольших числа из четырех переданных и возвращать значение суммы. 
 
 Вызовите функцию sum_big2 в функции main для прочитанных чисел из входного потока. 
 
 Выведите в консоль полученное значение суммы в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.5.7

Sample Input:

8 11 -6 3

Sample Output:

19

https://stepik.org/lesson/1191306/step/9?unit=1204294

*/