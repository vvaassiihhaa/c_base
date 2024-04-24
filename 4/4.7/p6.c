#include <stdio.h>

int main(void)
{
    int a = 1024, b = 1112;

    // scanf("%d; %d", &a, &b);

    void* p1 = (void *)a;
    void* p2 = (void *)b;

    int res = ( p2 - p1 ) / 8;

    printf("%d\n", res);

    return 0;
}

/*

Подвиг 6. Продолжите программу. 

Используя указатели p1 и p2 определите сколько переменных типа double уместится в памяти, 

начиная с адреса p1 и заканчивая адресом p2 (не включая ячейку с адресом p2). 

Выведите вычисленное число переменных в консоль в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.7.6

Sample Input:
1024; 1112

Sample Output:
11

https://stepik.org/lesson/1191290/step/8?unit=1204278

*/