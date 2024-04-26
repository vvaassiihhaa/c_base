#include <stdio.h>

float pows[] = { 0, 1, 2 };

int main(void)
{
    size_t bytes_pows = sizeof( pows );    
    size_t len_pows = bytes_pows / sizeof( pows[0] );

    for ( int i = len_pows, i > 0, i-- )
        printf( "%.1f ", pows[i] );

    return 0;
}

/*

Подвиг 4. 

В программе объявлен до функции main() массив с именем pows и типом элементов float. 

Этот массив скрыт в коде, но он существует. 

В функции main() выведите в консоль в одну строчку через пробел значения его элементов в обратном порядке с точностью до десятых.

https://stepik.org/lesson/1191292/step/6?unit=1204280

*/