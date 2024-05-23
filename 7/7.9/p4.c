#include <stdio.h>

typedef enum {
    coord_int = 1, 
    coord_double = 2 
} TYPE_COORD;

typedef union {
    int    coord_i; // 4 байта
    double coord_d; // 8 байт
} COORD;

typedef struct {
    COORD x;
    COORD y;
    TYPE_COORD type;
} POINT2;

int main( void ) {

    POINT2 pt;

    int tip_dannih;
    scanf( "%d", &tip_dannih );

    if( tip_dannih == coord_int ) 
        scanf( "%d %d", &pt.x.coord_i, &pt.y.coord_i );
    else
        scanf( "%lf %lf", &pt.x.coord_d, &pt.y.coord_d );
    
    pt.type = tip_dannih;

    return 0;
}

// scanf( "%d", &pt.type );