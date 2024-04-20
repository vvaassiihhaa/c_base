#include <stdio.h>

int main(void)
{
    int a0, d, n;
    scanf("%d; %d; %d", &a0, &d, &n);

    for(int i = 0; i < n; i++ ) {
        printf( "%d ", a0 + d * i ); // это написал табнайн
    }

    return 0;
}


/*

Подвиг 3. Продолжите программу, 
которая должна вычислять первые n членов арифметической прогрессии и 
выводить их по порядку в одну строчку через пробел. 
Члены прогрессии вычисляются по следующей схеме:

a0 - первый член;
a0 + d - второй член;
a0 + 2d - третий член;
...
a0 + (n-1)*d - n-й член

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.2.3

Sample Input:
-5; 3; 7

Sample Output:
-5 -2 1 4 7 10 13

https://stepik.org/lesson/1191285/step/5?unit=1204273

*/