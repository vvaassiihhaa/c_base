#include <stdio.h>
#include <string.h>

#define AMNT 20 
#define STRING_LENGTH 100

int to_csv ( char * str, size_t len_str, double * arr, size_t len_arr ) {

    sprintf( str, "%s:", "csv" );
    char digit[10];
    for ( int i = 0; i < len_arr; ++i ) {
        sprintf( digit, " %.2f;", arr[i] );
        strcat( str, digit );
    }
    str[ strlen( str ) - 1 ] = '\0';

    return len_arr;
}

int main( void ) {
    double ar[ AMNT ], lf;
    size_t count = 0;
    size_t sz_ar = sizeof( ar ) / sizeof ( *ar );

    while ( count < sz_ar && scanf( "%lf", &lf ) == 1 )
      ar[ count++ ] = lf;

    char info[ STRING_LENGTH ]; 
    to_csv( info, STRING_LENGTH, ar, count );  
    puts( info );  

    return 0;
}

/*

    // sprintf( info, "%s:", "csv" );

    // printf( info );


Подвиг 4. Напишите программу, которая читает из входного потока в массив несколько вещественных значений 
(не менее одного и не более 20), 
записанных в одну строчку через пробел. 

Объявите функцию с именем to_csv и следующими параметрами (порядок параметров должен соблюдаться):

указатель на массив символов (строку);
максимальная длина строки (неотрицательное целое число);
массив вещественных чисел (тип double);
длина массива (неотрицательное целое число).

Функция to_csv должна из переданного ей массива вещественных чисел сформировать строку в формате:

"csv: <число 1>; <число 2>; ...; <число N>"

Точность вещественных чисел должна быть два знака после запятой (точки), то есть, до сотых. Например:

"csv: 0.56; -65.43; 0.10; 11.00"

Полагается, что длины строки в 100 символов достаточно для хранения сформированной строки из чисел.

Функция to_csv должна возвращать количество (целое число) записанных в строку вещественных чисел.

В функции main вызвать функцию to_csv для вещественных чисел, 

прочитанных из входного потока и вывести в консоль сформированную строку.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.4.4

Sample Input:

0.01 5.43 0.785 11.9
Sample Output:

csv: 0.01; 5.43; 0.79; 11.90

https://stepik.org/lesson/1191305/step/6?unit=1204293

*/