#include <stdio.h>

int is_even( int a ) {
    return a % 2 == 0; // 1 = true, 0 = false
}

int main(void)
{
    int x;
    while(scanf("%d", &x) == 1) {
        if ( is_even( x ) ) printf( "%d ", x );
    }

    return 0;
}

/*

Подвиг 6. Продолжите программу, которая последовательно читает 
из входного потока целые числа в переменную x. 

Необходимо объявить функцию с именем is_even, которая принимает целое значение и 
проверяет его на четность. 

Если число четное, то функция is_even возвращает 1, а иначе 0. 

В записанном цикле while вызовите функцию is_even для каждого прочитанного числа 
и выведите в консоль в одну строчку через пробел только четные числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.2.6

Sample Input:

1 2 3 -4 5 6
Sample Output:

 2 -4 6

https://stepik.org/lesson/1191303/step/8?unit=1204291

*/