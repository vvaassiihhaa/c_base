#include <stdio.h>
#define MAX_SIZE    20

void reverse ( short [], int );

int main(void)
{
    short digs[MAX_SIZE];
    int count = 0;
    while(count < MAX_SIZE && scanf("%hd", &digs[count]) == 1)
        count++;

    reverse( digs, count );
    for ( int i = 0; i < count; ++i ) {
        printf("%hd ", digs[i]);
    }

    return 0;
}

void reverse ( short digs[], int count ) {
    short temp;
    for ( int i = 0, j = count - 1; i < j; ++i, --j ) {
        temp = digs[i];
        digs[i] = digs[j];
        digs[j] = temp;
    }
}

/*

Подвиг 5. Продолжите программу. 

Объявите функцию с именем reverse, которая имеет два параметра (порядок важен):

указатель на обрабатываемый массив типа short;
число обрабатываемых элементов массива.

Функция reverse должна "переворачивать" переданный массив, то есть, 
значения должны идти в обратном порядке: от последнего к первому.

Вызовите функцию reverse в функции main для массива digs. 

Выведите в консоль первые count значений массива digs в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.6.5

Sample Input:

4 7 -10 203 22 1 7 5
Sample Output:

5 7 1 22 203 -10 7 4

*/