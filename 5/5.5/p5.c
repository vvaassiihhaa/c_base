#include <stdio.h>

#define TOTAL     20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while(count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    for ( int i = 0; i < count; ++i )
        if ( pows[ i ] % 2 == 0 ) {
            for ( int j = i; j < count - 1; ++j )
                pows[ j ] = pows[ j + 1 ];   
            count = count > 0 ? count - 1 : 0;             
            break;
        }

    for ( int i = 0; i < count; ++i )
        printf( "%hd ", pows[i] );        

    return 0;
}

/*

    for ( int i = count - 1; i >= 0; --i )  // идём справа
        if ( pows[ i ] % 2 == 0 ) {
            for ( int j = i; j < count - 1; ++j )
                pows[ j ] = pows[ j + 1 ];
            count = count > 0 ? count - 1 : 0;      
        }



если все двойки - то что в массиве ?

Подвиг 5. Продолжите программу. Из массива pows необходимо удалить элемент 

с первым найденным четным значением. 

Если такой элемент не был найден, то, соответственно, ничего удалять не нужно. 

Выведите в консоль по порядку в одну строчку через пробел полученные значения оставшихся 

элементов массива pows.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.5

Sample Input:
1 3 5 7 8 4 3 2 1

Sample Output:
1 3 5 7 4 3 2 1

https://stepik.org/lesson/1191295/step/7?unit=1204283

*/