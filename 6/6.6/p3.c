#include <stdio.h>
#include <time.h>
#include <stdlib.h> // Функция rand() и константа RAND_MAX определены в заголовочном файле stdlib.h
#include <math.h>

double norm( int a, int b );

double reley( double x1, double x2 );

int main(void)
{
    double y;
    y = norm( -2, 10 );
    y = reley( norm(0, 5), norm(0, 5) );

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

double norm( int a, int b ) {
    double x = 0;
    double y = 0;
    int N = 100;
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        x += (double)rand() / RAND_MAX * (b - a) + a;
    }
    y = x / N;
    return y;
}

double reley( double x1, double x2 ) {
    return sqrt( x1 * x1 + x2 * x2 ); // a^2 = b^2 + c^2
}

