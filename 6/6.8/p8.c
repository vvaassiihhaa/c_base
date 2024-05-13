#include <string.h> // strchr
#include <stdio.h>  // fgets
#include <stdlib.h> // atof

#define MAXIMUM_ARRAY_LENGTH 20

int get_data_csv( double * arr, size_t len_arr, char * str );

int main(void)
{
    char str[100] = { 0 };
    fgets( str, sizeof( str ) - 1, stdin );
    char* ptr_n = strrchr( str, '\n' );
    if( ptr_n != NULL )
        *ptr_n = '\0';

    double ar[ MAXIMUM_ARRAY_LENGTH ] = { 0 };

    int count = get_data_csv( ar, MAXIMUM_ARRAY_LENGTH, str );

    for ( int i = 0; i < count; ++i )
        printf( "%.2lf ", ar[ i ] );    

    return 0;
}

int get_data_csv( double * arr, size_t len_arr, char * str ) {
    char* ptr; // указатель
    ptr = strchr( str, ':' );
    int count = 0;
    double number = atof( ptr + 1 );
    arr[ count++ ] = number;

    ptr = strchr( ptr + 1, ';' );
    while ( ptr != NULL && count < MAXIMUM_ARRAY_LENGTH ) {
        arr[ count++ ] = atof( ptr + 1 );
        ptr = strchr( ptr + 1, ';' );
    }

    return count; 
} 


/*

Подвиг 8 (на повторение). Допишите программу. 

Объявите функцию с именем 

get_data_csv со следующими параметрами 
(порядок параметров должен соблюдаться):

массив вещественных чисел;
максимальная длина массива (неотрицательное целое число);
указатель на корректную Си-строку.

Функция get_data_csv должна из переданной ей строки 
выделять и сохранять в переданный массив вещественные числа, 
которые записаны в формате:

"csv: <число 1>; <число 2>; ...; <число N>"

Например:

"csv: 0.56; -65.43; 0.1; 11.0"

Необходимо выделенные числа сохранять
 в переданном массиве в количестве не превышающем длину массива 20 
 элементов. 
 Функция get_data_csv должна возвращать количество (целое число) 
 записанных в массив вещественных чисел.

В функции main вызвать функцию get_data_csv для строки str 
и вывести в консоль выделенные 
в массив вещественные числа в одну строчку через пробел 
с точностью до сотых.

Sample Input:

csv: 0.56; -65.43; 0.1; 11.0
Sample Output:

0.56 -65.43 0.10 11.00

https://stepik.org/lesson/1191309/step/10?unit=1204297

*/