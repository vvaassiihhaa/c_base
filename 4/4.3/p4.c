#include <stdio.h>

int main( void ) {
    int n, i = 0;
    float S = 0;
    scanf( "%d", &n );

    do {
        ++i;
        S += 1.0 / i;
    } while( i < n );

    printf( "%.2f\n", S );

    return 0;
}

/*

Подвиг 4. Напишите программу, которая читает из входного потока натуральное число n (целое, положительное).

Затем, с помощью цикла do-while вычислить сумму следующего ряда:

S = 1 + 1/2 + 1/3 + ... + 1/n

Значение суммы вывести в консоль в виде вещественного числа с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.4

Sample Input:
7

Sample Output:
2.59

https://stepik.org/lesson/1191286/step/6?unit=1204274

*/