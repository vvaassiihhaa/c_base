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

    int len = 0;
    while ( str[ len++ ] != '\0' );   
    char word[10]; // второе слово
    int inWord = 0;
    int words = 0;

    for ( int i = 0; i < len; ++i ) {
        if ( inWord == 0 && words == 1 && str[i] != ' ' && str[i] != '\0' ) {
          while ( str[i] != ' ' && str[i] != '\0' ) {
            word[ inWord++ ] = str[i];
            ++i;
          }
          word[ inWord ] = '\0';
        }
        if ( inWord >= 1 && ( str[i] == ' ' || str[i] == '\0' ) ) {
            inWord = 0;
            words++;
        } // слово закончилось          
        if ( str[i] != ' ' && str[i] != '\0' )
            inWord = 1;              
    }    

    if ( words == 1 ) printf( "no" );
    else {

        printf( "%s", word );
    }
    return 0;
}

/*
test #1
input: "The  best language is C"
output: best

test #2
input: "  I  "
output: no

test #3
input: "y"
output: no

test #4
input: "a b"
output: b

test #5
input: " c   d   r f  "
output: d

test #6
input: "It's my life"
output: my
*/

/*
Максим Апаликов
13 дней назад
более короткий код

#include <stdio.h>
int main(void){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int word_count=0, space=0; //перевод: количество слов, пробел
    for(int i=0; str[i]!='\0'; i++)
        if(str[i]!=' ' && word_count==space) word_count++;
        else if(str[i]==' ' && word_count!=space) space=word_count;
      printf("%d",word_count);
    return 0;
}
*/

/*

Подвиг 8. Продолжите программу, которая читает из входного потока строку целиком с помощью функции
 fgets(). На выходе формируется корректная Си строка. 
 
 Выделите из строки второе слово (слова разделяются одним или несколькими пробелами) 
 и выведите его в консоль. 
 
 Пробелов до и после выделенного слова быть не должно. 
 
 Если строка состоит из одного слова, то в консоль вывести "no".

P. S. Пробелы могут быть в начале и в конце строки.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.8.8

Sample Input:

The  best language is C
Sample Output:

best

https://stepik.org/lesson/1191298/step/10?unit=1204286

*/