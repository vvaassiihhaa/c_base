#include <stdio.h>
#include <string.h>

int main(void)
{
    char ps[7][50];
    char ps2[7][50];    
    char ps_sort[400] = {};

    for ( int i = 0; i < 7; ++i ) {
       scanf( "%49s", ps[i] );
       strcpy( ps2[i], ps[i] );
    }

    for ( int j = 0; j < 7; ++j ) {
        int minlen = 50, minlen_index = 0;
        for ( int i = 0; i < 7; ++i )
            if ( strlen( ps2[i] ) < minlen && ps2[i][0] != '\0' ) {
                minlen = strlen( ps2[i] );
                minlen_index = i;
            }
        strcat( ps_sort, ps2[ minlen_index ] );
        if ( j < 6 ) strcat( ps_sort, " " );
        ps2[ minlen_index ][0] = '\0'; // автор этой строки - chat.openai.com
    }

    printf( "%s", ps_sort );    


    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

    // ps_sort[ strlen( ps_sort ) - 1 ] = '\0'; 
    // самый простой алгоритм - найти самую короткую строку и удалить её    


Подвиг 7* (с повторением). Продолжите программу, которая в массив строк ps (двумерный массив 7 x 50) 
читает из входного потока фамилии семи сотрудников, записанных в одну строчку через пробел. 

Считать, что максимальная длина фамилии не превышает 50 символов. 

Сформировать еще одну строку ps_sort, в которую через пробел скопировать фамилии сотрудников по возрастанию их длин. 

В конце последней фамилии пробела быть не должно, сразу стоять символ '\0'. Вывести строку ps_sort в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.9.7

Sample Input:

Ivanov Petrova Sidorova Balakirev Bach Stras Lomonosova
Sample Output:

Bach Stras Ivanov Petrova Sidorova Balakirev Lomonosova

https://stepik.org/lesson/1191299/step/9?unit=1204287

*/