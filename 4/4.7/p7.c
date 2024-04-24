#include <stdio.h>

int main( void ) {
    int count = 0;
    // scanf("%d", &count);

    char b = 0b00001001; 

    char *ptr = (char *) &count;
    for (int i = 0; i < sizeof(count); i++) {
        *ptr = *ptr | b;
        ptr++;
    }

    printf("%d\n", count);

    return 0;
}

/*

Подвиг 7 (с повторением). 

Напишите программу, которая читает из входного потока целое число в переменную count типа int. 

В каждом байте переменной count нужно включить 3-й и 0-й биты 

(нумерация бит в байте: 7, 6, 5, 4, 3, 2, 1, 0). 

Вывести в консоль полученное значение count в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.7.7

Sample Input:
0

Sample Output:
151587081

https://stepik.org/lesson/1191290/step/9?unit=1204278

*/