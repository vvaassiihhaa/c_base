#include <stdio.h>

int main(void)
{

    // не справился, списал у Сергея
    int ar_2D[4][3];
    int *ptr = &ar_2D[0][0];

    for ( int i =0; i < 12; ++ i )
      scanf( "%d", ptr++ );

    for ( int i =0; i < 3; ++ i )
      for ( int j =0; j < 4; ++ j )
        printf( "%d%c", ar_2D[ j ][ i ], ( j == 3 ) ? '\n' : ' ' );

    // return 0;

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 6. Продолжите программу, 

которая читает из входного потока 12 целых чисел, 

записанных в одну строчку через пробел, 
и помещает их по порядку в двумерный массив ar_2D размерностью 4 x 3 
(4 - строки; 3 - столбцы). 

Выведите в консоль в одну строчку через пробел целочисленные 

значения массива ar_2D по столбцам 

(сначала числа первого столбца, затем - второго и так до последнего). 

Пробелов в конце строк быть не должно.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.6.6

Sample Input:

1 2 3 4 5 6 7 8 9 10 11 12
Sample Output:

1 4 7 10
2 5 8 11
3 6 9 12

https://stepik.org/lesson/1191296/step/8?unit=1204284

*/