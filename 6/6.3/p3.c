#include <stdio.h>
#include <math.h>

double get_geom( int, int );

int main( void ) {
    int a, b;
    scanf( "%d, %d", &a, &b );

    double g = get_geom( a, b );
    printf( "%.2f", g );

    return 0;
}

double get_geom( int a, int b ) {
    return sqrt( a * b );
}

/*

Подвиг 3. Продолжите программу. 

Перед функцией main объявите прототип функции с именем get_geom, 
которая принимает два целочисленных параметра, вычисляет их среднее геометрическое по формуле:

g = sqrt( a * b )

и возвращает вычисленное значение g. 

Реализацию функции get_geom пропишите после функции main. 

В функции main вызовите функцию get_geom для переменных a и b. 

Вычисленное значение выведите в консоль в виде вещественного числа с точностью до сотых.

https://stepik.org/lesson/1191304/step/5?unit=1204292

*/