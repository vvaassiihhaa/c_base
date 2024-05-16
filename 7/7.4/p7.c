#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE    20

int main(void)
{
    int lengths[ MAXSIZE ];
    int count = 0;
    int num = 0;    
    while ( count < MAXSIZE && scanf( "%d", &num ) == 1 )  
        lengths[ count++ ] = num;

    int* ptr_lens = calloc( MAXSIZE, sizeof( int ) );
    memcpy( ptr_lens, lengths, count * sizeof( int ) );

    for ( int i = 0; i < MAXSIZE; ++i )
        printf("%d ", *( ptr_lens + i ) );

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    free( ptr_lens );

    return 0;
}


/*

Подвиг 7. Продолжите программу. Из входного потока прочитайте целочисленные значения, записанные в одну строчку через пробел, и сохраните их в массиве lengths типа int. Максимальное количество читаемых значений не более 20 (это нужно контролировать, в потоке чисел может быть больше). В целочисленной переменной count должно храниться количество прочитанных чисел.

Выделите память для хранения 20 целочисленных значений (тип int) с помощью функции calloc. На выделенную область должен ссылаться указатель ptr_lens. Скопируйте из массива lengths прочитанные числа в выделенную память, используя функцию memcpy (копировать следует не весь массив lengths, а только часть с хранимыми (прочитанными) данными). Указатель ptr_lens при этом не должен менять свой адрес. Выведите в консоль все 20 чисел типа int из области памяти ptr_lens в одну строчку через пробел.

P. S. Не забудьте в конце (после __ASSERT_TESTS__) освободить память.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/7.4.7

Sample Input:

1 5 4 3 8 10
Sample Output:

1 5 4 3 8 10 0 0 0 0 0 0 0 0 0 0 0 0 0 0

https://stepik.org/lesson/1191313/step/9?unit=1204301

*/