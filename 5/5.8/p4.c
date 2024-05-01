#include <stdio.h>

int main ( void ) {

    ii
    char data20[6][21];  // один символ дополнительно для конца строки \0

    for ( int i = 0; i < 6; ++i ) 
        scanf( "%20s", data20[i] );
        
    for ( int i = 5; i >= 0; --i )
        printf( "%s ", data20[i] );

    return 0;
}

/*

Подвиг 4. Напишите программу, которая читает из входного потока в 

массив data названия шести городов, записанных в одну строчку через пробел. 

Считать, что максимальная длина названия города не превышает 20 символов. 

Вывести в консоль прочитанные города в обратном порядке в одну строчку через пробел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.8.4

Sample Input:
Kazan Ufa Vladivostok Tver Moskva Samara

Sample Output:
Samara Moskva Tver Vladivostok Ufa Kazan

https://stepik.org/lesson/1191298/step/6?unit=1204286

*/