#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char* ptr = strstr( str, "--" ); 
    
    while( ptr != NULL ) {
        for ( int i = 2; i <= strlen( ptr ); ++i )
            ptr[ i - 1 ] = ptr[ i ];
        ptr = strstr( str, "--" ); 
    }

    printf( "%s\n", str );    

    return 0;
}

/*

Подвиг 5. Продолжите программу. 

В строке str необходимо заменить все подряд идущие дефисы (например: --, ---, ---- и т.д.) на один дефис (-). 

Выведите в консоль полученную строку.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.5

Sample Input:

cpp--znacheniya----parametrov-funkcii-po----umolchaniyu
Sample Output:

cpp-znacheniya-parametrov-funkcii-po-umolchaniyu

https://stepik.org/lesson/1191300/step/7?unit=1204288

*/