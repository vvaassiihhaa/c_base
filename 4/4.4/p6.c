#include <stdio.h>

int main ( void ) {
    int n = 4, m = 10, S = 0;
    scanf("%d %d", &n, &m);

    for ( int i = 0; i <= n; i++ ) 
        for ( int j = 0; j <= m; j++ ) {
            if ( i + j >= 10 ) 
                goto exit_sum;    

            S += i + j;
        }


    exit_sum: printf( "%d\n", S );

    return 0;
}

/*

test #3
input: 7 4
output: 165

test #4
input: 4 5
output: 135



Напишите программу, которая читает из входного потока два натуральных числа n, m
, записанных в одну строчку через пробел, и вычисляет следующую сумму:

S = сумма ( i = 0, n ) сумма ( j = 0, m ) i + j

Сумма должна вычисляться до тех пор, пока слагаемое i + j меньше 10.

Как только i + j окажется равно или больше 10,
прервать подсчет суммы с помощью оператора goto

exit_sum:

и вывести результат (полученную сумму) в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.4.6

Sample Input:
4 10

Sample Output:
45

https://stepik.org/lesson/1191287/step/8?unit=1204275

*/