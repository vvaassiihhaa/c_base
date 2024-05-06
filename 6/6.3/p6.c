#include <stdio.h>
#define PI 3.1415   // простая текстовая замена ( макрос ) директива препроцессора

double circle_len( double );

int main( void ) {
    double R;
    scanf( "%lf", &R ); // для типа double используется 

    // %f, %e, %g      СПЕЦИФИКАТОР F E или G
    // %F, %E, %G      и
    // %lf, %lg, %le   МОДИФИКАТОР l

    double res = circle_len( R );
    printf( "%.2f", res );

    return 0;
}

double circle_len( double R ) {
    return 2 * PI * R;
}
/*

Подвиг 6. Напишите программу, которая читает из входного потока радиус круга в виде вещественного числа.

 До функции main объявите прототип функции с именем circle_len, которая должна принимать радиус круга,
  вычислять его длину по формуле:

2 * PI * R

и возвращать вычисленное значение L. Значение 

Пи

 определить через директиву #define в виде макроопределения PI и взять равным 3.1415. 
 Реализацию функции circle_len пропишите после функции main. 
 
 В функции main вызовите функцию circle_len и выведите в консоль
  вычисленное значение длины круга в виде вещественного числа с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.3.6

Sample Input:

3.0
Sample Output:

18.85

https://stepik.org/lesson/1191304/step/8?unit=1204292

*/