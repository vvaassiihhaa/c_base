#include <stdio.h>

int main ( void ) {
    int n, s = 0;
    scanf( "%d", &n );

    for ( int i = 0; i < n; i++ ) 
        if ( i % 3 == 0 || i % 5 == 0 )
            s += i;

    printf( "%d\n", s );

    return 0;
}

/*

Подвиг 8. Напишите программу, которая читает из входного потока натуральное 
число n. 

Вычислить сумму всех натуральных чисел (больше 1 и меньше n), 

которые кратны или 3 или 5. 

Результат (сумму) вывести в консоль в виде одного целого числа. 

Пример: n = 10, имеем числа: 3, 5, 6, 9. Их сумма равна 23.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.2.8

Sample Input:
10

Sample Output:
23

https://stepik.org/lesson/1191285/step/10?unit=1204273

*/