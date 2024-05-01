#include <stdio.h>

void strip_string(char* str, int max_len)
{
    int count = 0;
    while(*str++ != '\0' && count++ < max_len);

    if(count > 0) {
        str -= 2;
        if(*str == '\n')
            *str = '\0';
    }
}

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));

    for ( int i = sizeof(str) - 1; i >= 0; --i )
        if ( str[i] == 'e' )
            for ( int j = i; j < sizeof(str) - 1; ++j )
                str[j] = str[j + 1];
                
    printf( "%s\n", str );

    return 0;
}

/*

Подвиг 6. Продолжите программу, которая читает из входного потока 

строку целиком с помощью функции fgets(). 

На выходе формируется корректная Си строка. 

Удалите из прочитанной строки все латинские символы 'e' и выведите в консоль полученную строку.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.8.6

Sample Input:

c_lokalnye-i-globalnye-peremennye
Sample Output:

c_lokalny-i-globalny-prmnny

https://stepik.org/lesson/1191298/step/8?unit=1204286

*/