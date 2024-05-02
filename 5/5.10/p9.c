#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char* ptr_at1 = strchr( str, '@' ); // слева
    char* ptr_at2 = strrchr( str, '@' ); // справа

    int result = 1;
    if ( ptr_at1[1] == '.' || ptr_at1 == str || ptr_at1 == NULL || ptr_at1 != ptr_at2 ) 
        result = 0;

    ptr_at2 = strrchr( str, '.' ); // справа
    if ( ptr_at2 - ptr_at1 <= 0 || ptr_at2 == NULL ) result = 0;        

    char s[] = "abcdefghijklmnopqrstuvwxyz"
               "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
               "0123456789._-@";

    for ( int i = 0; i < strlen( str ); ++i )
        if ( strchr( s, str[i] ) == NULL )
            result = 0;

    printf( "%d\n", result );

    return 0;
}
    // if ( strpbrk( str, s ) != NULL ) result = 0;
    // printf( "%s", s );
    // printf( "%d\n", result );
/*

strpbrk

Подвиг 9*. Продолжите программу. 

В переменной str содержится E-mail адрес. 

Необходимо проверить его корректность. 

Для этого в str должен присутствовать один символ '@', а после него (не сразу) - символ '.'. 

Также в самом E-mail адресе допустимы только символы: a-z, A-Z, 0-9, '.', '_', '-'. 

Если строка str содержит корректный E-mail адрес, то в консоль вывести 1, иначе 0.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.9

Sample Input:

sc_lib@list.ru
Sample Output:

1

https://stepik.org/lesson/1191300/step/11?unit=1204288

*/