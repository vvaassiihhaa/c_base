#include <stdio.h>
#include <string.h>

int main ( void ) {

    char cities[6][51];

    int maxlen = 0;
    int maxlen_ii;

    for ( int i = 0; i < 6; i++ ) {
        scanf ( "%50s", cities[i] );    
        if ( strlen ( cities[i] ) > maxlen ) {
            maxlen = strlen ( cities[i] ); 
            maxlen_ii = i;
        }
    }

    maxlen = 0;
    int maxlen2_ii;

    for ( int i = 0; i < 6; i++ ) {
        if ( strlen ( cities[i] ) > maxlen && i != maxlen_ii ) {
            maxlen = strlen ( cities[i] ); 
            maxlen2_ii = i;
        }
    }

    printf ( "%s %s", cities[maxlen_ii], cities[maxlen2_ii] );

    return 0;
}    

/*

strlen
strncat

Подвиг 3. Напишите программу, которая в массив строк 
cities читает из входного потока названия шести городов, записанных в одну строчку через пробел. 
Максимальная длина названия города не превышает 50 символов. 
Из всех названий выбрать два наибольших по длине и вывести в консоль в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.9.3

Sample Input:

Tver Moskwa Ulianovsk Barnaul Ufa Belgorod
Sample Output:

Ulianovsk Belgorod

https://stepik.org/lesson/1191299/step/5?unit=1204287

*/