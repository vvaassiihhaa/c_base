#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoi atof

#define TOTAL   5

int main(void)
{
    char str[TOTAL][50], *p_sort[TOTAL];
    int count = 0;
    while(count < TOTAL && fgets(str[count], sizeof(str)-1, stdin)) {
        char* ptr_n = strrchr(str[count], '\n');
        if(ptr_n != NULL)
            *ptr_n = '\0';
        count++;
    }

    for( int i = 0; i < count; ++i ) 
        p_sort[i] = str[i];
    
    int pos;
    char buff[50];

    float pos_ves, ves;

    for( int i = 0; i < count - 1; ++i ) { // сортировка
        pos = i;
        for ( int j = i + 1; j < count; ++ j ) {
            pos_ves = atof( strrchr( p_sort[ pos ], ';' ) + 1 ); // вес
            ves = atof( strrchr( p_sort[ j ], ';' ) + 1 ); // вес
            if( ves > pos_ves ) pos = j;
        }
        if ( pos != i ) {
            strcpy( buff, p_sort[ pos ] );
            strcpy( p_sort[ pos ], p_sort[ i ] );
            strcpy( p_sort[ i ], buff );
        }
    }

    int len;
    char* ptr;
    for ( int i = 0; i < count; ++i ) {
        ptr = strchr( p_sort[i], ':' );        
        len = ptr - p_sort[i];
        printf( "%.*s ", len, p_sort[i] );
    }

    return 0;
}

    // for( int i = 0; i < count; ++i ) 
    //     puts( p_sort[i] );

// char* p_sort[TOTAL]; // это уже было объявлено выше 

/*

Подвиг 8* (с повторением). Продолжите программу. 

В массиве строк str хранится информация о count товарах, каждый представлен в формате:

<наименование товара>: <идентификатор>; <цена>; <вес>

Здесь идентификатор - целое число; цена - целое число; вес - вещественное число. 

Необходимо массив указателей p_sort сформировать так, 
чтобы они ссылались на отсортированные строки по убыванию веса товара. 

(Сортировку лучше выполнять непосредственно массива p_sort.) 

Выведите в консоль в одну строчку через пробел наименования товаров, 
отсортированные по убыванию веса товара.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.8

Sample Input:

часы: 10; 5430; 0.3
компьютер: 13; 132045; 1.23
монитор: 1; 12300; 0.74
колонки: 2; 3245; 0.27
стол: 105; 3400; 5.7

Sample Output:

стол компьютер монитор часы колонки

https://stepik.org/lesson/1191301/step/10?unit=1204289

*/