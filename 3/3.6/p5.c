#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    float a1 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a2 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a3 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a4 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a5 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a6 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a7 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a8 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a9 = rand() * 1.0 / RAND_MAX * (b - a) + a;    
    float a0 = rand() * 1.0 / RAND_MAX * (b - a) + a;   

    printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f",
        a1, a2, a3, a4, a5, a6, a7, a8, a9, a0);

    return 0;
}

/*

Подвиг 5. Продолжите программу, которая генерирует
псевдослучайные вещественные числа в диапазоне от a до b (включительно).
Целые числа a и b (a < b) считываются из входного потока.
Значения формируются путем уменьшения исходного диапазона значений
[0; RAND_MAX] до диапазона [a; b], как показано на рисунке ниже.


Используйте для этого формулу:

y = rand() * 1.0 / RAND_MAX * (b - a) + a;

где rnd - случайное значение, возвращенное функцией rand().

Сгенерируйте десять псевдослучайных чисел и выведите их в консоль в одну
строчку через пробел с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.5

Sample Input:

-5 5
Sample Output:

-4.99 0.64 -3.07 3.09 0.85 -0.20 -1.50 3.96 3.23 2.47

*/