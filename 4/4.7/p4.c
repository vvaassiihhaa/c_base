#include <stdio.h>

int main(void)
{
    double value = 0.5;

    // scanf("%lf", &value);

    char *ptr = (char *) &value;
    for (int i = 0; i < sizeof(value); i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}

/*

Подвиг 4. Допишите следующую программу. 

Необходимо все 8 байт (тип double) переменной value вывести в консоль в виде десятичных чисел, 

записанных в одну строчку через пробел, начиная с первого байта.

Sample Input:
0.5

Sample Output:
0 0 0 0 0 0 -32 63

https://stepik.org/lesson/1191290/step/6?unit=1204278

*/