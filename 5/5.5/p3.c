#include <stdio.h>

#define TOTAL     10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;

    int i_5 = -1; // найти 5

    for ( int i = 0; i < count; i++ )
       if ( digs[i] == 5 && i + 1 < count ) {
           i_5 = i + 1;
           break;
       }

    if ( i_5 != -1 ) {        
        for ( int i = count; i > i_5; i-- )
            digs[i] = digs[i-1];         // сдвигаем все элементы ( вправо )      
        digs[i_5] = -5;
        if ( count < TOTAL ) count++;                
    }

    for ( int i = 0; i < count; i++ )
        printf("%d ", *(digs + i) );

    return 0;
}

/*

Подвиг 3. Продолжите программу. 

Необходимо после первого найденного элемента со значением 5 массива digs вставить новое значение -5. 

Обратите внимание, что при вставке нового значения, последний элемент массива digs может теряться 
(если длина массива не позволяет хранить все значения). 

Также следует учитывать, что элемент со значением 5 может отсутствовать в массиве digs (тогда ничего вставлять не нужно). 

Выведите в консоль по порядку значения всех прочитанных + добавленных элементов массива digs в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.3

Sample Input:

1 2 3 4 5 5 6 7
Sample Output:

1 2 3 4 5 -5 5 6 7 

https://stepik.org/lesson/1191295/step/5?unit=1204283

*/