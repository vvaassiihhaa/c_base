#include <stdio.h>

int main(void)
{
    int ar[100];
    int * const ptr_ar = ar;

    int number = 0;
    int ii = 0;

    do {
        scanf( "%d", &number );
        if  ( number != 78 )
            *( ptr_ar + ii++ ) = number;
    } while ( number != 78 );
    
    for ( int i = 0; i < ii; i++ )
        printf( "%d ", *( ptr_ar + i ) );

    return 0;
}

/*

Подвиг 5. Продолжите программу. 

Необходимо из входного потока читать целые числа (по одному), пока не встретится число 78. 

Все прочитанные числа по порядку заносить в массив ar, используя указатель ptr_ar (кроме последнего числа 78). 

Вывести в консоль прочитанные значения из массива ar в одну строчку через пробел в порядке их чтения.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.4.5

Sample Input:
1 6 4 2 0 -100 496 3 5 78 101 102 103

Sample Output:
1 6 4 2 0 -100 496 3 5

https://stepik.org/lesson/1191294/step/7?unit=1204282

*/