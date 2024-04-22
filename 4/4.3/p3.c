#include <stdio.h>

int main( void ) {
    int d, s = 0;

    do {
        scanf( "%d", &d );
        if ( d > 0 )
            s += d;
    } while ( d != 13 );

    printf( "%d\n", s );

    return 0;
}


/*

Подвиг 3. Напишите программу с использованием цикла do-while, 
которая читает из входного потока целые числа (по одному) до тех пор, 
пока не встретится число 13. 

Все положительные прочитанные числа просуммировать (включая число 13) и вывести полученную сумму в виде одного целого числа в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.3

Sample Input:
1 4 -3 10 -1 13

Sample Output:
28

https://stepik.org/lesson/1191286/step/5?unit=1204274

*/