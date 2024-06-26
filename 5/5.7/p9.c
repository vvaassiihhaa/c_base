#include <stdio.h>

int main(void)
{
    
    char str[50] = "Best   language  \"C\"";

    // двигаясь справа ищем два пробела
    // и удаляем правый пробел

    int len = 0;
    while ( str[ len++ ] != '\0' );

    for ( int i = len - 1; i >= 0; i-- )
       if ( str[i] == ' ' && str[i - 1] == ' ' )
           for ( int j = i; j < len - 1; ++j )
               str[j] = str[j + 1];
       else if ( str[i] == ' ' )
           str[i] = '\n';        

    printf( "%s\n", str );

    // for ( int i = 0; i < len; ++i )
    //     if ( str[i] == ' ' )
    //     {
    //         for ( int j = i; j < len - 1; ++j ) // кусок кода сгенерирован нейросетью табнайн
    //             str[j] = str[j + 1];
    //         --len;
    //     }

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 9. Продолжите программу, 
в которой объявляется строка с именем str и максимальной длиной 50 символов 
(включая символ конца строки). Инициализируйте str строкой:

Best   language  "C"

(Обратите внимание на несколько подряд идущих пробелов, они должны все присутствовать в строке.) 

Затем, все группы подряд идущих символов пробелов заменить на символ переноса строки. 
(Каждая группа пробелов заменяется одним символом переноса строки.)

P. S. В консоль ничего выводить не нужно.

https://stepik.org/lesson/1191297/step/11?unit=1204285

*/