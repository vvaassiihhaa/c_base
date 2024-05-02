#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char* ptr_at1 = strrchr(str, '@'); // слева
    char* ptr_at2 = strchr(str, '@');  // справа

    int result = 1;
    if ( ptr_at1 == NULL || ptr_at1 != ptr_at2 ) result = 0;

    printf( "%d\n", result );

    return 0;
}

/*

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