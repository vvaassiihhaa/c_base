#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int x;
    int y;
} POINT;

int rect_square( POINT*, POINT* );

int main( void ) {

    POINT p1, p2;
    scanf( "%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y );
    int square = rect_square( &p1, &p2 );
    printf( "%d", square ); 
    
    return 0;
}

int rect_square( POINT* p1, POINT* p2 ) {
    int length = abs( p1->x - p2->x );
    int width = abs( p1->y - p2->y );
    int res = length * width;

    return res;    
} // площадь прямоугольника

