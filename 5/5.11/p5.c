#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL   5

int main(void)
{
    char str[TOTAL][50];
    int count = 0;
    while(count < TOTAL && fgets(str[count], sizeof(str)-1, stdin)) {
        char* ptr_n = strrchr(str[count], '\n');
        if(ptr_n != NULL)
            *ptr_n = '\0';
        count++;
    }

    char* ptr;
    // double price = 0.0;
    int price = 0;
    for ( int i = count - 1; i > 0; --i ) {
        ptr = strchr( str[i], ';' );
        // price = atof( ptr + 1 );
        price = atoi( ptr + 1 );
        if ( price == 12300 ) {
            for ( int j = i; j < count - 1; ++j ) 
                strcpy( str[j], str[j + 1] );          
            strcpy( str[count - 1], "" );         // в первый символ вписывается \0
            --count;
        }
    }

    int len;
    for ( int i = 0; i < count; ++i ) {
        ptr = strchr( str[i], ':' );        
        len = ptr - str[i];
        printf( "%.*s ", len, str[i] );
    }

    return 0;
}

// printf( "%s ", str[i] );

/*

    // printf( "%d", count );

Подвиг 5. Продолжите программу. В массиве строк str хранится информация о count товарах, каждый представлен в формате:

<наименование товара>: <идентификатор>; <цена>; <вес>

Здесь идентификатор - целое число; цена - вещественное число; вес - вещественное число. 

Необходимо удалить из массива str все товары с ценой равной 12300. 

Выведите в консоль в одну строчку через пробел оставшиеся наименования товаров в массиве str в порядке их следования.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.5

Sample Input:

watch: 10; 5430; 0.3
pc: 13; 132045; 1.23
screen: 1; 12300; 0.74
speaker: 2; 3245; 0.3
table: 105; 3400; 5.7

Sample Output:

часы компьютер колонки стол

https://stepik.org/lesson/1191301/step/7?unit=1204289

*/