#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    char * ptr = strchr( str, ':' ); // strtok(str, "x");
    int h = atoi( ptr + 1 );
    int w = atoi( strchr( str, 'x' ) + 1 );
    int d = atoi( strrchr( str, 'x' ) + 1 );

    // printf( "%d %d %d\n", h, w, d );
    // printf( "%d %s", atoi( ptr + 1 ), ptr );

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 3. Продолжите программу. 

В переменную str считывается строка в формате:

<наименование товара>: <высота> x <ширина> x <длина>.

(Символ x - латинская буква.) 

Значения высоты, ширины и глубины представлены целыми числами. 

Необходимо выделить их из строки и сохранить в целочисленные переменные: h (высота), w (ширина), d (длина).

P. S. В консоль ничего выводить не нужно. Строка str меняться не должна.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.3

Sample Input:

флэшка: 10 x 50 x 100
Sample Output:

https://stepik.org/lesson/1191301/step/5?unit=1204289

*/