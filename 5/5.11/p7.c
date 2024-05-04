#include <stdio.h>
#include <string.h>

int main ( void ) {

    char name[20];    
    scanf( "%s", name );
    int marks[20] = { 0 };
    int count = -1;
    while ( scanf( "%d", &marks[ ++count ] ) == 1 );

    char info[100];
    sprintf( info, "%s:", name );

    char digit[5];
    for ( int i = 0; i < count; ++i ) {
        sprintf( digit, " %d,", marks[i] );
        strcat( info, digit );
    }

    info[ strlen( info ) - 1 ] = '\0';
    puts( info );

    return 0;
}

        // strcat( info, " " );
        // strcat( info, "," );
    // printf( "%s:", name );
    // for ( int i = 0; i < count; ++i )
    //    printf( "%d ", marks[i] );


// char str[100] = { 0 };

/*

atoi
sprintf
strcat


Подвиг 7. Напишите программу, которая читает из входного потока слово (имя студента), 
а затем, целые числа. 

Все записано в одну строчку через пробел.

Максимальное количество чисел не более 20. Затем, представьте эти числа в виде строки формата:

<имя студента>: <оценка 1>, <оценка 2>, ..., <оценка N>

Оценки должны следовать в порядке их считывания. Выведите полученную строку в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.7

Sample Input:

Туполев 5 5 5 4 5 5 3 4
Sample Output:

Туполев: 5, 5, 5, 4, 5, 5, 3, 4

https://stepik.org/lesson/1191301/step/9?unit=1204289

*/