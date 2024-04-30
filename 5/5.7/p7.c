#include <stdio.h>

int main(void)
{
    char str[50] = "best string!";

    int len = 0;
    while ( str[ len++ ] != '\0' );

    for ( int ii = 0; ii < 4; ++ii ) {
        for ( int i = len - 1; i >= 0; --i )
            str[ i + 1 ] = str[ i ];
        len++;    
    }

    str[0] = 'T';
    str[1] = 'h';
    str[2] = 'e';
    str[3] = ' ';    

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 7. Продолжите программу, в которой объявляется строка 
с именем str и максимальной длиной 50 символов (включая символ конца строки).

Инициализируйте str строковым литералом "best string!". 

Затем, вставьте в начало массива str фрагмент "The ", чтобы получилось "The best string!".

P. S. В консоль ничего выводить не нужно.

https://stepik.org/lesson/1191297/step/9?unit=1204285

*/