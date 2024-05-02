#include <stdio.h>
#include <string.h>

int main ( void ) {

    char cities[6][51];

    int maxlen = 0;
    int ii = 0;

    for ( int i = 0; i < 6; i++ ) {
        scanf ( "%50s", cities[i] );    
        if ( strlen ( cities[i] ) > maxlen ) {
            maxlen = strlen ( cities[i] ); // у кого длиннее        
            ii = i;
        }
    }        

    printf ( "%s", cities[ii] );

    return 0;
}

/*
strlen()

Подвиг 2. Напишите программу, которая в массив строк cities читает из входного потока названия шести городов, 
записанных в одну строчку через пробел.
 Максимальная длина названия города не превышает 50 символов. 
 
 Из всех названий выбрать наибольшее по длине и вывести в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.9.2

Sample Input:

Tver Moskwa Ulianovsk Barnaul Ufa Belgorod
Sample Output:

Ulianovsk

https://stepik.org/lesson/1191299/step/4?unit=1204287

*/