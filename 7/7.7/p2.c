#include <stdio.h>

struct tag_geom {
    char type;  // тип геометрической фигуры
    int x0, y0; // координаты верхнего левого угла
    int x1, y1; // координаты нижнего правого угла
};

int main( void ) {
    
    struct tag_geom geom = { .type = '1', .x0 = 10, .y0 = 20, .x1 = 50, .y1 = 30 }; 
    struct tag_geom* ptr_geom = &geom; // указатель ptr_geom на переменную geom

    printf( "%c %d %d %d %d\n", ptr_geom->type, ptr_geom->x0, ptr_geom->y0, ptr_geom->x1, ptr_geom->y1 );

    return 0;
}

// struct tag_point pt = {.y = -1, .x = 2};

// struct tag_point {
//     int x;
//     int y;
//     int z;
// };