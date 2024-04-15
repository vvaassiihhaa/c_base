#include <stdio.h>

#define MAX_WIDTH       1280
#define GET_WIDTH(W)    ( W <= MAX_WIDTH ) ? W : MAX_WIDTH 

int main(void)
{
    int width;
    scanf("%d", &width);

    width = GET_WIDTH( width );
    printf( "width = %d", width );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}


/*

Подвиг 2. Продолжите программу. 

Определите макро-функцию GET_WIDTH так, чтобы она возвращала значение W, 
если W <= MAX_WIDTH, иначе - значение MAX_WIDTH. 
Сделайте это с использованием тернарного условного оператора. 
Вызовите макрос-функцию GET_WIDTH для корректировки значения переменной width. 
Выведите ее значение в консоль в виде строки (без кавычек):

"width = <значение>"

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.8.2

Sample Input:

100
Sample Output:

width = 100

*/