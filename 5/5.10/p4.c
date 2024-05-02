#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char* ptr = strrchr( str, '-' ); // выполняем поиск справа

    while( ptr != NULL ) {
        for ( int i = strlen( ptr ) - 1; i >= 0; --i ) {
            ptr[ i + 1 ] = ptr[ i ];
            ptr[ i + 2 ] = ptr[ i + 1 ];
        }
        ptr[ 0 ] = '+';
        ptr[ 1 ] = '+';
        ptr[ 2 ] = '+';
        ptr = strrchr( str, '-' ); // выполняем поиск справа
    }

    ptr = strstr( str, "+++" );
    while( ptr != NULL ) {
        ptr[ 0 ] = '-';
        ptr[ 2 ] = '-';
        ptr = strstr( str, "+++" );        
    }
        
    printf( "%s\n", str );    

    return 0;
}

/*


//    while( ptr != NULL )
//        for ( int i = strlen( ptr ) - 1; i >= 0; --i )
//            ptr[ i + 1 ] = ptr[ i ];



Подвиг 4. Продолжите программу. Замените в строке str все дефисы (-) фрагментом "-+-". Выведите полученную строку в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.4

Sample Input:

https://proproprogs.ru/c_base/cpp-znacheniya-parametrov-funkcii-po-umolchaniyu
Sample Output:

https://proproprogs.ru/c_base/cpp-+-znacheniya-+-parametrov-+-funkcii-+-po-+-umolchaniyu

https://stepik.org/lesson/1191300/step/6?unit=1204288

*/