#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct tag_obj {
    char url[ 1024 ];
    struct tag_obj* next;
} OBJ;

OBJ* push( OBJ*, const char* );

OBJ* pop( OBJ* );

int main( void ) {

    OBJ* top = NULL;
    top = push( top, "https://proproprogs.ru/c_base/c_etapy-translyacii-programmy-v-mashinnyy-kod-standarty" );
    top = push( top, "https://proproprogs.ru/c_base/c_struktura-i-ponimanie-raboty-programmy-hello-world" );
    top = push( top, "https://proproprogs.ru/c_base/c_dvoichnaya-shestnadcaterichnaya-i-vosmerichnaya-sistemy-schisleniya" );
    top = push( top, "https://proproprogs.ru/c_base/c_lokalnye-i-globalnye-peremennye" );
    top = push( top, "https://proproprogs.ru/c_base/c_perechisleniya-enum-direktiva-typedef" );

    while( top != NULL )      
        top = pop( top ); // Не забудьте в конце программы освободить память
    
    return 0;
}

OBJ* push( OBJ* top, const char* url ) {
    OBJ* ptr = malloc( sizeof( OBJ ) );
    strcpy( ptr->url, url );
    ptr->next = top;
    return ptr;
}

// pop - функция удаления объекта
OBJ* pop( OBJ* top ) {
    if( top == NULL ) return top; 
    OBJ* ptr_next = top->next;
    free( top );
    return ptr_next;
}