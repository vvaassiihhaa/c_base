#include <stdio.h>

int calc_rect( int, int, int );

int main(void) {
    int a, b, t;
    scanf( "%d, %d, %d", &a, &b, &t );

    int res = calc_rect( a, b, t );
    printf( "%d\n", res );

    return 0;
}

int calc_rect( int w, int h, int type ) {
    if ( type == 1 ) return w * h; // площадь
    return 2 * ( w + h );          // периметр
}

/*

Подвиг 4. Продолжите программу. 
Перед функцией main объявите прототип функции с именем calc_rect, 
которая имеет три целочисленных параметра: 

w, h - ширина и длина прямоугольника; type - тип вычисления. 

Функция calc_rect должна вычислять и возвращать площадь
 прямоугольника со сторонами w, h, если type равен 1 и периметр - в противном случае. 
 
 Возвращаемое значение должно быть целочисленным. 

Реализацию функции calc_rect пропишите после функции main.
 В функции main вызовите функцию calc_rect для переменных a,  b и t.
  Вычисленное значение выведите в консоль в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.3.4

Sample Input:

87, 32, 2
Sample Output:

238

https://stepik.org/lesson/1191304/step/6?unit=1204292

*/