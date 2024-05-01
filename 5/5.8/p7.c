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

    int words = 0;
    int len = 0;
    while ( str[ len++ ] != '\0' );    
    int inWord = 0;

    for ( int i = 0; i < len; ++i ) {
        if ( inWord == 1 && ( str[i] == ' ' || str[i] == '\0' ) ) {
            inWord = 0;
            words++;
        } // слово закончилось
        if ( str[i] != ' ' && str[i] != '\0' )
         inWord = 1;
    }     

    printf( "%d\n", words );

    return 0;
}
//  I love  C 
/*

Подвиг 7. Продолжите программу, которая читает из входного потока строку целиком 

с помощью функции fgets(). На выходе формируется корректная Си строка. 

Вычислите количество слов в строке (слова разделяются одним или несколькими пробелами) 

и выведите в консоль полученное целое число.

P. S. Пробелы могут быть в начале и в конце строки.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.8.7

Sample Input:

  I love  C 
Sample Output:

3

https://stepik.org/lesson/1191298/step/9?unit=1204286

*/