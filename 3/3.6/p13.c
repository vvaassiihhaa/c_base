#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d, %d", &a, &b); // b - прилежащий катет

    float tan_value, angle_rad;

    tan_value = (float)a / (float)b;
    angle_rad = atan(tan_value);
    printf("%.2f %.2f\n", tan_value, angle_rad);

    return 0;
}

/*

#include <stdio.h>

int main() {
    float a, b, tan_value, angle_rad;

    // Ввод значений катетов
    printf("Введите длину противолежащего катета (a): ");
    scanf("%f", &a);
    printf("Введите длину прилежащего катета (b): ");
    scanf("%f", &b);

    // Вычисление тангенса угла
    tan_value = a / b;

    // Определение угла в радианах по тангенсу
    angle_rad = atan(tan_value);

    // Вывод результатов
    printf("Тангенс угла и угол в радианах: %.2f %.2f\n", tan_value, angle_rad);

    return 0;
}



угол по тангенсу в радианах =  atan(tan);

Подвиг 13. Продолжите программу.

Необходимо вычислить тангенс угла прямоугольного треугольника
с противолежащим катетом размером a и прилежащим катетом размером b.

(Вычисляется по формуле: tan = a / b.)

Затем, определите угол (в радианах) по вычисленному тангенсу.

Выведите в консоль тангенс угла и угол в виде вещественных чисел
с точностью до сотых в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.13

Sample Input:

5, 10
Sample Output:

0.50 0.46

*/

