#include <stdio.h>
#include <string.h>


// здесь функция сравнения с сигнатурой:
int match_ab(const char a, const char b);

void sort_string( char *str, size_t max_len, int ( * match ) ( const char a, const char b ) ) {
    max_len = strlen( str ); // вот это зачем надо ?
    char temp;
    int pos;
    for ( int i = 0; i < max_len - 1; i++ ) {
        pos = i;
        for ( int j = i + 1; j < max_len; ++j ) 
            if ( match( str[pos], str[j] ) ) 
                pos = j;
        if ( pos != i ) {
            temp = str[i];
            str[i] = str[pos];
            str[pos] = temp;
        }             
    }
}

int main(void)
{
    char str[ 100 ] = {0};
    fgets( str, sizeof( str ) - 1, stdin );
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    sort_string( str, strlen( str ), match_ab );
    puts( str );

    return 0;
}

int match_ab(const char a, const char b) {
    char numbers[] = "0123456789";

    if ( strchr( numbers, a ) != NULL && strchr( numbers, b ) == NULL )
        return 0;

    if ( strchr( numbers, a ) == NULL && strchr( numbers, b ) != NULL )
        return 1;
       
    return a > b; 
}

/*

Подвиг 6* (с повторением). 

Продолжите программу. 

Необходимо дописать функцию sort_string, 

которая бы выполняла сортировку символов переданной строки str 
(только символов строки, а не всех символов массива) 

по их возрастанию (неубыванию). 

Критерий возрастания (какой символ считать большим, а какой меньшим) 
задается дополнительной функцией с сигнатурой:

int match_ab(const char a, const char b);

Данная функция должна возвращать 1, если a < b,
 и 0 в противном случае. 
 
 И, кроме того, все цифровые символы ('0', ..., '9') должны быть "меньше" 
 любых других символов. 
 
 То есть, при сортировке сначала в строке будут идти цифровые символы (по возрастанию), 
 а затем все остальные (по возрастанию).

Вызовите функцию sort_string для строки 

str и с функцией сравнения match_ab. 

Выведите полученную строку str в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.5.6

Sample Input:

Phone number: 7845037856221

Sample Output:

0122345567788  :Pbeehmnnoru

https://stepik.org/lesson/1191306/step/8?unit=1204294

*/