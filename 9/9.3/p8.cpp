#include <iostream>
#include <cmath>

double triangle_sq( int, int, int );

int main () {
    int a, b, c;
    std::cin >> a >> b >> c;
    double area = triangle_sq( a, b, c );
    printf( "%.2lf", area );

    return 0;
}

double triangle_sq( int a, int b, int c ) {
    double p = ( a + b + c ) / 2.0;
    double res = sqrt( p * ( p - a ) * ( p - b ) * ( p - c ) );
    return res;
}
