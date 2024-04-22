#include <stdio.h>

int main(void)
{
    int p = 1, n;
    scanf("%d", &n);

    // for(int i = 2;i <= n; ++i)
    //     p *= i;

    int i = 1;
    do { 
        p *= i;
        ++i;
    } while( i <= n );

    printf("%d", p);

    return 0;
}

/*

Подвиг 2. Перепишите следующую программу с использованием цикла do-while, сохранив логику работы программы.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.2

Sample Input:
5

Sample Output:
120

https://stepik.org/lesson/1191286/step/4?unit=1204274

*/