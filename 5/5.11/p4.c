#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[200] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    double csv[50] = {0};
    char* ptr = strchr( str, ':' );
    csv[0] = atof( ptr + 1 );
    int i = 0;
    while( ( ptr = strchr( ptr + 1, ';' ) ) != NULL && i < 50 )         
        csv[ ++i ] = atof( ptr + 1 );

    // Печать полученных значений
    // for (int j = 0; j <= i; j++) 
    //     printf("%.2f ", csv[j]);

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

    // printf( "%f\n", csv[0] );

    // ptr = strchr( ptr + 1, ';' );
    // csv[1] = atof( ptr + 1 );
    // printf( "%f\n", csv[1] );


    // попробуем создать указатель

Подвиг 4. Продолжите программу. В переменную str считывается строка в формате:

csv: <число 1>; <число 2>; <число 3>; ...; <число N>

(после точки с запятой может быть любое число пробелов от 0 и выше).

Числа представлены вещественными значениями, а их общее количество может быть любым, но не менее 1 и не более 50. 

Необходимо выделить из строки все числа и сохранить их в массиве csv типа double в порядке записи в строке.

P. S. В консоль ничего выводить не нужно. Строка str меняться не должна.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.4

Sample Input:

csv: 0.5; 24.35; -45.36; 100.0;65.3; -44.3
Sample Output:

https://stepik.org/lesson/1191301/step/6?unit=1204289

*/