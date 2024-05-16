#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // здесь продолжайте программу
    double digits[ 20 ];
    int count = 0;
    double num = 0.0;
    while ( count < 20 && scanf( "%lf", &num ) == 1 )  
        digits[ count++ ] = num;

    double* ptr_d = ( double* ) malloc( count * sizeof(double) ); // Выделите дополнительно память
    for ( int i = 0; i < count; ++i )    
        ptr_d[ i ] = digits[ i ]; // Скопируйте из массива digits прочитанные числа в выделенную память
    
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    free( ptr_d );
    return 0;
}