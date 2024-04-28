#include <stdio.h>

#define TOTAL     20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while(count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    for ( int i = count - 1; i >= 0; --i )  // идём справа
        if ( pows[ i ] % 3 == 0 ) {
            for ( int j = i; j < count - 1; ++j )
                pows[ j ] = pows[ j + 1 ];
            count = count > 0 ? count - 1 : 0;      
        }   

    for ( int i = 0; i < count; ++i )
        printf( "%hd ", pows[i] );  

    return 0;
}

/*

Подвиг 6. Продолжите программу. 

Из массива pows необходимо удалить все элементы кратные 3 (делятся нацело на 3). 

Если таких элементов нет, то ничего удалять не нужно. 

Выведите в консоль по порядку в одну строчку через пробел полученные 

значения оставшихся элементов массива pows.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.6

Sample Input:
1 2 3 4 5 6 7 8 9 10

Sample Output:
1 2 4 5 7 8 10

https://stepik.org/lesson/1191295/step/8?unit=1204283

*/