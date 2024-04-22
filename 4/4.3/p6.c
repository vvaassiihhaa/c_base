#include <stdio.h>

int main( void ) {
    int n;
    scanf( "%d", &n );

    for ( int i = 0; i < n; i++ )  
    {
        for ( int j = 0; j < i + 1; j++ )
            printf( "*" );
        printf( "\n" );
    }

    return 0;
}

/*

Подвиг 6. Используя вложенные циклы (любые), вывести в консоль из звездочек (*) следующую фигуру (пробелы не использовать):

*
**
***
****

Число выводимых строк определяется целочисленной переменной n (натуральное число), значение которой считывается из входного потока.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.6

Sample Input:

7
Sample Output:

*
**
***
****
*****
******
*******

https://stepik.org/lesson/1191286/step/8?unit=1204274

*/