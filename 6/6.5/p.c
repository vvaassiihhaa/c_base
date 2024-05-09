#include <stdio.h>

void print_hi( void );
int sq_rect( int width, int height ); // площадь прямоугольника
int per_rect( int width, int height ); // периметр прямоугольника  
int main ( void ) {
    // printf( "sq_rect = %p\n", sq_rect );
    int ( * ptr_func ) ( int, int );          // объявили указатель
    int res;

    // ptr_func( 2, 3 ) = 6
    ptr_func = sq_rect;                      // указатель указывает на функцию
    res = ptr_func( 2, 3 );                  // вызывается функция sq_rect
    printf( "ptr_func( 2, 3 ) = %d\n", res );

    // ptr_func( 2, 3 ) = 10    
    ptr_func = per_rect;             // указатель указывает на ДРУГУЮ функцию 
    res = ptr_func( 2, 3 ); 
    printf( "ptr_func( 2, 3 ) = %d\n", res );

    void ( * ptr_hi ) ( void );
    ptr_hi = print_hi;
    ptr_hi();

    return 0;
}

int per_rect( int width, int height ) {
    return ( width + height ) * 2;
}

int sq_rect( int width, int height ) {
    return width * height;
}

void print_hi( void ) { puts("Hi!"); }
