#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);

    char find[] = '\n'; // 10

    char *ptr = strrchr( str, 10 );
    if ( ptr != NULL )
      *ptr = '\0';
     
    printf( "[%s]\n", str );

    return 0;
}

/*

Подвиг 2. Продолжите программу. 

В строке str необходимо найти последний символ '\n' и если он найден, то заменить на символ '\0'. 

Вывести в консоль полученную строку str в квадратных скобках.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.2

Sample Input:

Языки Си. Строки
Sample Output:

[Языки Си. Строки]

https://stepik.org/lesson/1191300/step/4?unit=1204288

*/