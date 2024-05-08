#include <stdio.h>

#define SIZE 3

void show_pole( char arr [SIZE][SIZE] );

int main( void ) {
    char pole[SIZE][SIZE] = {0};
    char* ptr_p = &pole[0][0];
    int count = 0;
    while(count < SIZE * SIZE && scanf("%d", ptr_p) == 1) {
        *ptr_p = (*ptr_p == 1) ? 'x' : (*ptr_p == 2) ? 'o': *ptr_p;
        ptr_p++;
        count++;
    }

    show_pole( pole );

    return 0;
}

void show_pole( char arr [SIZE][SIZE] ) {
    for( int i = 0; i < SIZE; ++i ) {
        for( int j = 0; j < SIZE; ++j ) {
            if ( arr[i][j] == 0 )
              printf ( "%c", '#' );
            else  
              printf ( "%c", arr[i][j] );
            if( j < SIZE - 1 ) printf(" ");
        }
        printf("\n");
    }
}

// двумерный массив в виде таблицы размером SIZE x SIZE

/*

Подвиг 7. Продолжите программу. 

Объявите функцию с именем show_pole, которой передается двумерный массив типа char размером SIZE x SIZE элементов. 

Она должна отобразить в консоли этот двумерный массив в виде таблицы размером SIZE x SIZE по следующей схеме:

* * *
* * *
* * *

То есть, в три строки и три столбца. 

Причем, между символами в строках должен быть один пробел. 

В конце строк пробела быть не должно.

Вместо символа '*'' необходимо вывести символ, 

который хранится в элементах переданного массива, либо символ '#', если значение элемента равно 0 (целое число).

В функции main вызывать функцию show_pole для массива pole.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.4.7

Sample Input:

0 1 0
2 0 2
1 0 0

Sample Output:

# x #
o # o
x # #

https://stepik.org/lesson/1191305/step/9?unit=1204293

*/