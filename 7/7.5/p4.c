#include <stdio.h>

enum menu_item { item_exit = 1, item_c = 2, item_python = 3, item_java = 4 };

int main ( void ) {
    enum menu_item item;
    scanf( "%d", &item );

    switch ( item ) {
        case item_exit:
            printf( "Выход\n" );
            break;
        case item_c:
            printf( "Язык Си\n" );
            break;
        case item_python:
            printf( "Язык Python\n" );
            break;
        case item_java:
            printf( "Язык Java\n" );
            break;
        default:
            printf( "Не верный пункт меню\n" );
            break;
    }

    return 0;
}