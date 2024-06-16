#include <stdio.h>

int main() {
    int sz_ar; // Размер массива
    printf("Введите размер массива: ");
    scanf("%d", &sz_ar);

    short ar[sz_ar]; // Объявление массива с заданным размером
    int count = 0;

    printf("Введите элементы массива (целые числа):\n");
    while (count < sz_ar && scanf("%hd", &ar[count]) == 1) {
        count++;
    }

    // Вывод элементов массива для проверки
    printf("Вы ввели следующие элементы:\n");
    for (int i = 0; i < count; i++) {
        printf("%hd ", ar[i]);
    }
    printf("\n");

    return 0;
}
