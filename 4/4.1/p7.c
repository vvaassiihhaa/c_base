#include <stdio.h>

int main( void ) {

    int n, m;
    scanf( "%d %d", &n, &m );

    while ( n <= m ) {
        if ( n % 3 == 0 ) 
            printf( "%d ", n );
        n++;
    }    

    return 0;
}    

/*

Подвиг 7. Напишите программу, которая читает из входного потока два натуральных числа n и m,
записанных через пробел, причем n < m.

Выведите в консоль в одну строчку через пробел все числа кратные 3 (нацело делятся на 3) из интервала [n, m].

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.1.7

Sample Input:

100 150
Sample Output:

102 105 108 111 114 117 120 123 126 129 132 135 138 141 144 147 150


https://stepik.org/lesson/1191284/step/9?unit=1204272

*/