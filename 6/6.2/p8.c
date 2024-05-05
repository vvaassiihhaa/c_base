#include <stdio.h>
#include <math.h>

double get_length( int a, int b ) {
    return sqrt( a * a + b * b );
}

int main(void)
{
    int x, y;
    scanf( "%d %d", &x, &y );
    printf( "%.2f\n", get_length( x, y ) );

    return 0;
}

/*

Подвиг 8. Напишите программу, которая 
читает из входного потока два целых числа в переменные x, y, 
записанных в одну строчку через пробел. 

Объявите функцию с именем get_length, которая возвращает длину радиус-вектора с координатами (x, y).

Напомню, что длина радиус-вектора вычисляется по формуле:

sqrt( x^2 + y^2 )

В функции main вызовите функцию get_length с прочитанными значениями 
x, y и выведите в консоль длину радиус-вектора с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.2.8

Sample Input:

-25 78
Sample Output:

81.91

https://stepik.org/lesson/1191303/step/10?unit=1204291

*/