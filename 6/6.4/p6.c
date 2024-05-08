#include <stdio.h>

#define SIZE    4

void transpose( short * arr );

int main(void)
{
    short matrix[SIZE][SIZE] = {0};
    short* ptr = &matrix[0][0];
    int count = 0;
    while(count < SIZE * SIZE && scanf("%hd", ptr) == 1) {
        ptr++;
        count++;
    }

    transpose( matrix );

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf( "%hd", matrix[i][j] );
            if( j < SIZE - 1 ) printf(" ");
        }
        printf( "\n" );
    }

    return 0;
}

void transpose( short * arr ) {
   short temp = 0;
   for(int i = 0; i < SIZE; i++) {
       for(int j = i; j < SIZE; j++) {
           temp = arr[i * SIZE + j];
           arr[i * SIZE + j] = arr[j * SIZE + i];
           arr[j * SIZE + i] = temp;
       }
   }
}

/*

1 2
3 4

    for ( int i = 0; i < SIZE; ++i )
        for ( int j = 0; j < SIZE; ++j )
Подвиг 6. Продолжите программу. 

Необходимо объявить функцию с именем transpose, которой передается 

двумерный массив размером SIZE x SIZE из чисел типа short. 

Функция transpose должна строки заменять на соответствующие столбцы 

(транспонирование) переданного массива. 

В функции main вызовите функцию transpose для массива matrix. 

Выведите полученный транспонированный массив matrix в консоль 

в виде таблицы целых чисел SIZE x SIZE элементов.

(Обратите внимание, что между числами в строках должен быть один пробел, а в конце строк - ни одного.) 

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.4.6

Sample Input:

1 2 3 4
5 6 7 8
9 8 7 6
5 4 3 2
Sample Output:

1 5 9 5
2 6 8 4
3 7 7 3
4 8 6 2

https://stepik.org/lesson/1191305/step/8?unit=1204293

*/