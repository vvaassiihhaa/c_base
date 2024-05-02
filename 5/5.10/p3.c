#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    int d = 0;
    char* my = str;
    while( strstr( my, "is" ) != NULL ) {
        d++;
        my = strstr( my, "is" ) + 2;
    }
    printf( "%d\n", d );

    return 0;
}

/*

Подвиг 3. Продолжите программу. 

Определите в строке str количество фрагментов 'is' и выведите в консоль полученное целое число.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.3

Sample Input:

My sister is a nervous girl, but she is very kind.
Sample Output:

3

https://stepik.org/lesson/1191300/step/5?unit=1204288

*/