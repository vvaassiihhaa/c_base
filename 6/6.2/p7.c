#include <stdio.h>

int is_range( double x, double a, double b ) {
    if ( x <= a || x >= b ) return 0;
    return 1;
}

int main( void ) {

    double x;
    while( scanf( "%lf", &x ) == 1 ) 
      if ( !is_range( x, -2.5, 3.5 ) )
        printf( "%.1f ", x );

    return 0;
}

/*

(-2.5; 3.5)

Подвиг 7. Продолжите программу, 
которая последовательно читает из входного потока вещественные числа в переменную x. 

Необходимо объявить функцию с именем is_range со следующей сигнатурой:

int is_range(double x, double a, double b);

Функция is_range должна проверять попадание числа x в диапазон (a; b) не включая границы 
(круглые скобки). 

Если x принадлежит диапазону (a; b), то функция возвращает 1, иначе 0. 

В записанном цикле while вызовите функцию is_range 

для каждого прочитанного числа и выведите в консоль в одну строчку через 

пробел с точностью до десятых те числа, 

для которых функция is_range с границами (-2.5; 3.5) выдает ложное значение.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.2.7

Sample Input:

0.54 0.1 -4.3 -2.1 10.56 7.43 -5.4 0.05
Sample Output:

-4.3 10.6 7.4 -5.4

https://stepik.org/lesson/1191303/step/9?unit=1204291

*/