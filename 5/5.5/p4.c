#include <stdio.h>

#define TOTAL     10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    int digs2[TOTAL] = { 0 };
    int d2 = 0; 

    for ( int i = 0; i < count; i++ ) {
        if ( d2 + i < TOTAL )
            *( digs2 + d2 + i ) = digs[i];
            if ( digs[i] == 5 && d2 + i < TOTAL ) {
                digs2[ i + d2 ] = 5;
                *( digs2 + ++d2 + i ) = -d2;
            }          
    }

    for ( int i = 0; i < d2 + count; i++ ) 
      if ( i < TOTAL )
        printf("%d ", *(digs2 + i) );

    return 0;
}

/*

1 2 5 3 5 4 5 6 ^D

Подвиг 4. Продолжите программу.

Необходимо после каждого элемента со значением 5 массива digs вставлять новые элементы 

со значениями: -1 - после первой найденной пятерки; -2 - после второй пятерки и т.д. 

Обратите внимание, что при вставке новых значений, последние элементы массива digs могут теряться. 

Также следует учитывать, что элемент со значением 5 может отсутствовать в массиве digs (тогда ничего вставлять не нужно). 

Выведите в консоль по порядку значения всех прочитанных + добавленных элементов массива digs в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.4

Sample Input:
1 2 5 3 5 4 5 6

Sample Output:
1 2 5 -1 3 5 -2 4 5 -3

https://stepik.org/lesson/1191295/step/6?unit=1204283

*/