#include <stdio.h>

#define SIZE_BUFFER     128

int main(void)
{
    int buffer[SIZE_BUFFER];
    size_t count = 0;
    size_t sz_ar = sizeof(buffer) / sizeof(*buffer);

    while(count < sz_ar && scanf("%d", &buffer[count]) == 1)
        count++;

    int half = count / 2;            // 5
    if ( count % 2 != 0 ) half += 1; // 6
    int buf;

    for ( int i = 0; i < count / 2; i++ ) {
        buf = *( buffer + i );
        *( buffer + i ) = *( buffer + half + i );
        *( buffer + half + i ) = buf;
    }

    for ( int i = 0; i < count; i++ ) 
        printf( "%d ", *( buffer + i ) );
    
    return 0;
}

/*

Подвиг 2. Продолжите программу. 

Необходимо в массиве buffer поменять местами первую половину прочитанных данных со второй половиной.

 Обратите внимание, что число прочитанных данных определяется переменной count. 
 Причем, если count четное, то первая половина меняется со второй целиком, 
 а если count нечетное, то центральный элемент должен оставаться на своем месте без изменений.
 
 Выведите в консоль в одну строчку через пробел первые count элементов полученного массива buffer.

P. S. Дополнительных массивов в программе не создавать.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.2

Sample Input:
6 70 8 9 10 1 20 3 4 5 11

Sample Output:
20 3 4 5 11 1 6 70 8 9 10

https://stepik.org/lesson/1191295/step/4?unit=1204283

*/