#include <stdio.h>

int main(void)
{
    int digits[5];

    int a0, a1, a2, a3, a4;
    scanf("%d %d %d %d %d", &a0, &a1, &a2, &a3, &a4);

    digits[0] = a0;
    digits[1] = a1;
    digits[2] = a2;
    digits[3] = a3;
    digits[4] = a4;
    for (int i = 0; i < 5; i++)    
      printf("%d ", digits[i]);
    

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 8. Продолжите программу. 

Необходимо прочитать из входного потока пять целых чисел, записанных в одну строчку через пробел, 
в массив с именем digits длиной пять элементов типа int. 

Используя оператор цикла for, выведите в консоль все значения элементов массива digits в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.1.8

Sample Input:
3 6 78 4 101

Sample Output:
3 6 78 4 101

https://stepik.org/lesson/1191291/step/10?unit=1204279

*/