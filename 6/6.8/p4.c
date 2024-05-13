#include <stdio.h>
#include <string.h>
#include <stdarg.h>

double v_norm2( char *str, ... );

int main(void)
{
    double res;
    res = v_norm2 ( "vector2", 1.0, 2.0 );
    printf( "%.1f\n", res );

    return 0;
}

double v_norm2( char *str, ... ) {

    double norm2 = 0.0;

    va_list args;
    va_start( args, str );

    if ( strcmp( str, "vector2" ) == 0 ) {
        double x = va_arg(args, double);
        double y = va_arg(args, double);
        norm2 = x * x + y * y;
    }
    if (strcmp(str, "vector3") == 0) {
        double x = va_arg(args, double);
        double y = va_arg(args, double);
        double z = va_arg(args, double);
        norm2 = x * x + y * y + z * z;
    }
    if (strcmp(str, "vector4") == 0) {
        double x = va_arg(args, double);
        double y = va_arg(args, double);
        double z = va_arg(args, double);
        double w = va_arg(args, double);
        norm2 = x * x + y * y + z * z + w * w;
    }

    va_end( args );

    return norm2;    
}

/*

Подвиг 4. Объявите в программе вариадическую функцию 
с именем v_norm2, 
в которой должны быть определены следующие параметры (порядок важен):

указатель на строку (массив типа char);
вариадические параметры (тип double).

Функция v_norm2 должна вычислять норму вектора по следующему правилу:

если в первом параметре строка "vector2", 
то вектор имеет две координаты;

если в первом параметре строка "vector3", 
то вектор имеет три координаты;

если в первом параметре строка "vector4", 
то вектор имеет четыре координаты;

если в первом параметре иная строка, 
то норма не вычисляется и возвращается 0.0.

Квадратичная норма вектора вычисляется по формуле:

norm2 = x * x + y * y

где x, y, ... - координаты вектора (передаются через вариадические параметры). 

Функция v_norm2 должна возвращать вычисленную норму 
в виде вещественного числа типа double.

В функции main вызовите функцию v_norm2 
для вычисления квадратичной нормы 
двумерного вектора с координатами 1.0 и 2.0. 

Выведите результат в консоль в виде вещественного 
числа с точностью до десятых.

https://stepik.org/lesson/1191309/step/6?unit=1204297

*/