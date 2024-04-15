#include <stdio.h>
#include <math.h>

#define GIPOT(a,b) (sqrt( (a) * (a) + (b) * (b) ))

int main(void)
{
    int a, b;
    if(scanf("%d, %d", &a, &b) != 2) {
        printf("Input error");
        return 0;
    }

    float length;
    length = GIPOT( a + 3, b - 2 );
    printf( "%.2f", length );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}


/*

Подвиг 4. Продолжите программу, в которой определена макро-функция с именем 
GIPOT, вычисляющая длину гипотенузы по двум катетам прямоугольного треугольника. 
Вызовите макрос GIPOT для величин a+3 и b-2. 
Результат вызова сохраните в переменной length. 
Выведите в консоль значение переменной length с точностью до сотых.

Напомню, что длина гипотенузы вычисляется по формуле: 

c = sqrt( a * a + b * b )

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.8.4

Sample Input:

8, 11
Sample Output:

14.21


*/