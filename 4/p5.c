#include <stdio.h> // в итоге написал на опенаи

int main( void ) {
    int n, sum = 0;
    scanf( "%d", &n );
    while ( n != 0 ) {
        sum += n % 10; // остаток от 123 % 10 = 3
        n /= 10;       // 123 / 10 = 12
    }
    printf( "%d\n", sum );

    return 0;
}

/*

Подвиг 5. Напишите программу, 
которая читает из входного потока натуральное число n (целое, положительное), 
которое содержит от 2-х и более цифр. 

Используя цикл while, вычислить сумму цифр числа n. Результат вывести в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.1.5

Sample Input:
123

Sample Output:
6

https://stepik.org/lesson/1191284/step/7?unit=1204272

https://chat.openai.com/c/b1b7f5f3-894e-4e7a-a999-955f237ce2ce

*/