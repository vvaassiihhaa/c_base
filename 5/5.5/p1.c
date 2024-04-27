#include <stdio.h>

int main(void)
{
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);

    while(count < sz_ar && scanf("%hd", &ar[count]) == 1)
        count++;

    int marks_i = 0;
    for ( int i = count - 1; i >= 0; i-- ) 
        if ( marks_i < 5 )
            *(marks + marks_i++) = *(ar + i);
    
    for ( int i = 0; i < marks_i; i++ )
        printf( "%hd ", *(marks + i) );

    return 0;
}

/*

Подвиг 1. Продолжите программу. 
Необходимо из массива ar в обратном порядке (идя от последнего записанного значения к первому) 
скопировать прочитанные данные в массив marks (копирование выполнять от первого элемента к последнему), 
не выходя за пределы массива marks. 

То есть, в случае достижения последнего элемента массива marks, останавливать процедуру копирования. 
Вывести в консоль значения массива marks (от первого до последнего скопированного элемента) в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.1

Sample Input:

1 2 3 4 5 6 7 8 9 10 11 12 13
Sample Output:

10 9 8 7 6

https://stepik.org/lesson/1191295/step/2?unit=1204283

*/