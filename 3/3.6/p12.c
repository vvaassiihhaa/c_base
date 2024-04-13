#include <stdio.h>
#include <math.h>

int main( void ) {
    float grad;
    scanf( "%f", &grad );
    float rad = grad * 3.1415 / 180;
    printf( "%.1f\n", sin( rad ) );  

    return 0;
}

/*

Подвиг 12. Напишите программу чтения из входного потока вещественного значения угла,
выраженного в градусах.
Вычислите синус этого угла и выведите результат в консоль
в виде вещественного значения с точностью до десятых.

P.S. Не забудьте перевести градусы в радианы по формуле:

rad = grad * pi / 180

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.6.12

Sample Input:
56.5

Sample Output:
0.8


*/