#include <stdbool.h>
#include <stdio.h>

int main( void ) {
    float f1, f2, f3;
    scanf( "%f, %f, %f", &f1, &f2, &f3 );
    bool yes = true;
    if ( f1 > f2 + f3 ) yes = false; // длина стороны болльше суммы двух других - это не треугольник
    if ( f2 > f1 + f3 ) yes = false;
    if ( f3 > f1 + f2 ) yes = false;
    if ( yes ) printf( "yes" );
        else   printf( "no"  );
    
    return 0;
}

/*
Подвиг 10. Напишите программу чтения трех положительных вещественных чисел из входного потока, записанных в одну строчку через запятую. Необходимо определить, могут ли эти числа образовывать стороны треугольника. Если образуют, то вывести в консоль "yes", иначе - "no".

Критерий проверки: у любого треугольника длина третьей стороны всегда должна быть меньше суммы двух других.
*/