#include <stdio.h>

double max_2(double a, double b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    double a, b;
    scanf("%lf, %lf", &a, &b);

    double ( * ptr_max_2 ) ( double, double ); // объявили указатель, как в моём видео https://youtu.be/iQzNfZqA40M
    ptr_max_2 = max_2;                         // указатель указывает ----> на функцию max_2 
    printf( "%.1f", ptr_max_2( a, b ) );       // используем функцию max_2 через указатель
    
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 2. Продолжите программу. В функции main объявите указатель с именем 
ptr_max_2 на функцию max_2 и вызовите функцию через этот указатель с переменными a и b. 

Выведите в консоль возвращенное вещественное число с точностью до десятых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.5.2

Sample Input:

0.5, 0.78

Sample Output:

0.8

https://stepik.org/lesson/1191306/step/4?unit=1204294

*/