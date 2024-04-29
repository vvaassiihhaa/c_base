#include <stdio.h>

#define ROWS    3
#define COLS    5

int main(void)
{
    short vls[ROWS][COLS] = {0};
    short *ptr_vls = &vls[0][0];

    short x;
    for(int i = 0;i < ROWS * COLS && scanf("%hd", &x) == 1; ++i)
        *ptr_vls++ = x;

    double mean[3];
    double S = 0.0;
    for( int i = 0; i < 3; ++i ) {
        S = 0.0;
        for( int j = 0; j < 5; ++j )
            S += vls[i][j];
        mean[i] = S / 5;
    }

    for ( int i = 0; i < 3; ++i )
        printf( "%.2f ", mean[i] );

    // return 0;

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 7. В программе ниже выполняется считывание целочисленных значений из входного потока 

с их последовательной записью в массив vls размерностью 3 x 5 (3 строки и 5 столбцов). 

Необходимо объявить еще один массив с именем mean типа double и размерностью 3 элемента. 

В элементы массива mean следует записать среднее арифметическое каждой строки массива vls. 

Выведите в консоль значения элементов массива mean (по порядку) 

в одну строчку через пробел с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.6.7

Sample Input:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

Sample Output:
3.00 8.00 13.00

https://stepik.org/lesson/1191296/step/9?unit=1204284

*/