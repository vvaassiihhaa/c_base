#include <stdio.h>

int main( void ) {
    float f1, f2, f3;
    scanf( "%f, %f, %f", &f1, &f2, &f3 );
    
    float min = f1;
    if ( f2 < min ) min = f2;
    if ( f3 < min ) min = f3;
    printf( "%.2f", min );
    
    return 0;
}
/*
Подвиг 9. Напишите программу чтения трех вещественных чисел из входного потока, записанных в одну строчку через запятую. Необходимо определить наименьшее среди них и вывести его в консоль с точностью до сотых.
*/