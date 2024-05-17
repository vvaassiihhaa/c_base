#include <stdio.h>

enum calc_types { _perimetr = 1, _square = 2 }  ;

double calc_rect( double, double, enum calc_types );

int main( void ) {
    enum calc_types type;
    double width, height;
    scanf( "%d %lf %lf", &type, &width, &height );

    double res = calc_rect( width, height, type );
    printf( "%.1f", res );

    return 0;
}

double calc_rect( double width, double height, enum calc_types type ) {
    switch ( type ) {
        case _perimetr:
            return 2 * ( width + height );
        case _square:
            return width * height;
        default:
            return 0;
    }
}