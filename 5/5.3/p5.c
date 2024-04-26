#include <stdio.h>

int main(void)
{
    int value = 1025;
    // scanf( "%d", &value );

    char ar_d[4] = { 0 };
    char *ptr = ( char * )&value;
    for ( int i = 0; i < 4; ++i )
    {
        ar_d[i] = *ptr;
        printf( "%d ", ar_d[i] );
        ++ptr;
    }    


    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*




Подвиг 5. Продолжите программу. 

Прочитайте из входного потока целое число в переменную value типа int. 

Объявите массив с именем ar_d типа char и длиной для побайтного хранения числа типа int. 

Скопируйте значение каждого байта переменной value в массив ar_d (значение самой переменной value не менять). 

Выведите значения элементов массива ar_d в консоль в виде десятичных чисел в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.3.5

Sample Input:
1025

Sample Output:
1 4 0 0

https://stepik.org/lesson/1191293/step/7?unit=1204281

*/