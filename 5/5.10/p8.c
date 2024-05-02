#include <stdio.h>
#include <string.h>

int main ( void ) {

    char time[9], time2[9];
    scanf( "%s", time );
    char *ptr = strrchr( time, ':' ); 
    strcpy( time2, ptr + 1 );    
    ptr = strchr( time, ':' ); 
    strncat( time2, ptr, 4 );    
    strncat( time2, time, 2 );
    printf( "%s", time2 );

    return 0;
}   

    // char hh[3], mm[3], ss[3];
    // scanf("%s:%s:%s", hh, mm, ss);
    // printf( "%s", ss );



/*

15:24:10
Подвиг 8. Напишите программу, которая читает из входного потока время, представленное в виде строки формата:

hh:mm:ss

где hh - часы; mm - минуты; ss - секунды. Например:

12:06:30

Необходимо преобразовать эту строку и представить время в формате:

ss:mm:hh

Полученную строку вывести в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.8

Sample Input:

15:24:10
Sample Output:

10:24:15

https://stepik.org/lesson/1191300/step/10?unit=1204288

*/