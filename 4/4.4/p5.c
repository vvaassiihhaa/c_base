#include <stdio.h>

int main ( void ) {
    int n = 140;
    // scanf ( "%d", &n );

    for ( int i = 2; i <= n / 2; i++ ) {
        if ( n % i > 0 ) continue;
        printf ( "%d ", i );    
        n /= i;    
        i = 1;
    }

    if ( n > 0 ) printf ( "%d ", n );

    return 0;
}


/*

Подвиг 5. Напишите программу, которая читает из входного потока натуральное число n.

Вычислите у этого числа все его простые множители ( разложить число по простым множителям )

 и выведите их в порядке возрастания (неубывания) в одну строчку через пробел.

Например, число 140 = 2 * 2 * 5 * 7. В консоли должно отображаться 2 2 5 7.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.4.5

Sample Input:
725

Sample Output:
5 5 29

https://stepik.org/lesson/1191287/step/7?unit=1204275

*/