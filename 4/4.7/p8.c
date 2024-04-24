#include <stdio.h>

int main ( void ) {
    int count = 65535;
    // scanf("%d", &count);    

    char mask = 0b00111101;

    char *ptr = (char *) &count;
    for (int i = 0; i < sizeof(count); i++) {
        *ptr = *ptr & mask;
        ptr++;
    }
    printf("%d\n", count);

    return 0;
}

/*

Подвиг 8 (с повторением). 

Напишите программу, которая читает из входного потока целое число в переменную count типа int. 

В каждом байте переменной count нужно выключить 7-й, 6-й и 1-й биты 
нумерация бит в байте: 7, 6, 5, 4, 3, 2, 1, 0). 

Вывести в консоль полученное значение count в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.7.8

Sample Input:
65535

Sample Output:
15677

https://stepik.org/lesson/1191290/step/10?unit=1204278

*/