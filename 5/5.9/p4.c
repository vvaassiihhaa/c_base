#include <stdio.h>
#include <string.h>

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
    char str[100], res_str[100] = "I love language C ";
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));

    size_t max_add = sizeof( res_str ) - strlen( res_str ) - 1; // скопировано из лекции с заменой str на res_str
    strncat( res_str, str, max_add );
    str[ sizeof( res_str ) - 1 ] = '\0';                         // скопировано из лекции с заменой str на res_str
    printf("%s", res_str );

    return 0;
}

/*

strncat(str, str_cat, max_add);

Подвиг 4. Продолжите программу, которая читает из входного потока строку целиком с помощью функции fgets() в массив str.

На выходе формируется корректная Си строка.

Добавьте к строке res_str строку str.

При объединении строк необходимо контролировать выход за пределы массива res_str.

То есть, из строки str можно максимум скопировать до 99-го индекса строки res_str.
В конце строки res_str обязательно должен стоять символ '\0'.
Выведите полученную строку res_str в консоль.



Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.9.4

Sample Input:

because it is very fast!
Sample Output:

I love language C because it is very fast!

https://stepik.org/lesson/1191299/step/6?unit=1204287

*/