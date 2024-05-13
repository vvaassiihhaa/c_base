#include <stdio.h>
#include <stdarg.h>

void ar_scan( double mas[], size_t mas_len, ... );

int main(void)
{
    double weights[40] = {1.25, 4.34, -5.43, 0.01, -0.8};
    double w1, w2, w3;
    ar_scan(weights, 3, &w1, &w2, &w3);

    printf("%.2f %.2f %.2f", w1, w2, w3);

    return 0;
}

void ar_scan( double mas[], size_t mas_len, ... ) {
    va_list ap;
    va_start( ap, mas_len );
    for ( size_t i = 0; i < mas_len; ++i ) {
      double *adres_number;
      adres_number = va_arg( ap, double * );
      *adres_number = mas[ i ];  
    }
    va_end( ap );
}

        // double number = *( va_arg( ap, double * )); 
        // mas[i] = va_arg( ap, double );


/*

Подвиг 7. Продолжите программу. 

Объявите вариадическую функцию с именем 

ar_scan, в которой должны быть определены 
следующие параметры (порядок важен):

указатель на массив типа double;
число записываемых из массива в переменные значений (тип size_t);
вариадические параметры (тип double *).

Функция ar_scan должна из переданного массива 
последовательно читать значения указанного числа элементов 
(второй параметр) и записывать их в переменные, 
адреса которых хранятся в вариадических параметрах. 
В функции main уже реализован вызов функции ar_scan.

https://stepik.org/lesson/1191309/step/9?unit=1204297

*/