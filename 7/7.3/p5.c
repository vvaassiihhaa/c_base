#include <stdio.h>

int range(int start, int stop, int step);

int main(void)
{
    int start, stop, step;
    scanf("%d %d %d", &start, &stop, &step);

    for(int i = 0;i < 20; ++i)
        printf("%d ", range(start, stop, step));

    return 0;
}

int range(int start, int stop, int step) {
    static int i = 0;
    if (i == 0) {
        i = start;
        return i;
    }
    if (i <= stop - step) {
        i += step;
        return i;
    }
    i = start;
    return i;
}

/*

Подвиг 5. Допишите программу без использования глобальных переменных, в которой объявляется функция со следующей сигнатурой:

int range(int start, int stop, int step);
При первом запуске она должна настраивать счетчик на формирование последовательности целых чисел от start до stop (включительно) с шагом step. Также первый запуск возвращает первое значение последовательности. При повторных вызовах функции range параметры start, stop, step не должны играть никакого значения. Сама же функция range при каждом новом вызове должна возвращать очередные числа последовательности. Например, при start=5, stop 11, step=2, имеем:

5, 7, 9, 11, 5, 7, 9, 11, 5, 7, 9, 11, 5, 7, 9, 11, 5, 7, 9, 11, ...

То есть, при достижении граничного значения stop, происходит возврат на начальное значение start.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.3.5

Sample Input:

-2 100 7
Sample Output:

-2 5 12 19 26 33 40 47 54 61 68 75 82 89 96 -2 5 12 19 26

https://stepik.org/lesson/1191312/step/7?unit=1204300

*/