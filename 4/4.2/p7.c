#include <stdio.h>

int main ( void ) {
    int n;
    scanf( "%d", &n );

    for ( int i = 1; i <= n; i++ ) 
        if ( n % i == 0 )
            printf("%d ", i);

    return 0;
}

/*

Подвиг 7. 
Напишите программу, которая читает из входного потока натуральное число n. 

С помощью цикла for найти все делители этого числа 
(то есть, натуральные числа, которые нацело делят число n, включая числа 1 и n). 

Все найденные делители вывести по порядку (начиная с наименьшего) в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.2.7

Sample Input:
10

Sample Output:
1 2 5 10

https://stepik.org/lesson/1191285/step/9?unit=1204273

*/