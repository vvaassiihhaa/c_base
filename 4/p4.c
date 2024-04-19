#include <stdio.h>

int main( void ) {
    int n;
    scanf( "%d", &n );
    float S;
    while ( n > 0 ) {
        S += 1.0 / ( n * n );
        n--;
    }
    printf( "%.3f", S );
      
    return 0;
}

/*

Подвиг 4. Напишите программу, которая читает из входного потока 
натуральное число n (целое, положительное). 

Вычислите с помощью цикла while сумму ряда

S = 1 / ( 1 * 1 ) + 1 / ( 2 * 2 ) + ... + 1 / ( n * n ) 

Выведите результат в консоль в виде вещественного числа с точностью до тысячных.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.1.4

Sample Input:
8

Sample Output:
1.527

https://stepik.org/lesson/1191284/step/6?unit=1204272

*/