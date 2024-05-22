#include <stdio.h>
#define LENGTH  20

typedef struct {
    int x;
    int y;
} POINT; //  структура с полями x, y типа int типа POINT

typedef struct {
    double mean_x;
    double mean_y;
} DATA;

DATA get_means( POINT [], size_t ); // функция ( одномерный массив и его длина )

int main( void ) {
    POINT points[ LENGTH ];
    size_t count = 0;
    while( scanf( "%d %d", &points[count].x, &points[count].y ) == 2 ) 
        count++; // читаем целые числа
    
    DATA means = get_means( points, count );
    printf("%.2f %.2f\n", means.mean_x, means.mean_y);

    return 0;
}

DATA get_means( POINT array[], size_t length ) {
    double sum_x = 0, sum_y = 0;
    for( size_t i = 0; i < length; ++i ) {
        sum_x += array[i].x;
        sum_y += array[i].y;
    }
    DATA result = { sum_x / length, sum_y / length };
    return result; 
} //  два средних арифметических числа