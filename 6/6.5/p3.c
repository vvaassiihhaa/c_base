#include <stdio.h>
#include <string.h>

void copy_string(char* dst, size_t max_len_dst, const char* src, int ( * nado )(const char) )
{
    for ( int i = 0; i < max_len_dst; ++i ) dst[ i ] = 0; // в конце всегда должен быть символ '\0'
    for ( int i = 0, j = 0; i < max_len_dst; ++i ) {
        if ( nado( src[ i ] ) ) 
            dst[ j++ ] = src[ i ];
    }
}

int is_nado( const char x ) {
    char s[] = "abcdefghijklmnopqrstuvwxyz"
               "ABCDEFGHIJKLMNOPQRSTUVWXYZ";    
    if ( strchr( s, x ) == NULL )
        return 1;    
    else           
        return 0;
}


int main(void)
{
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    copy_string( str2, sizeof( str2 ), str, is_nado );
    puts( str2 );

    return 0;
}

/*

Подвиг 3. Продолжите программу.

Необходимо дописать функцию copy_string, которая копирует строку из src в dst с учетом ее максимального размера.

Последним параметром функции copy_string должен быть указатель на функцию с сигнатурой:

int <имя функции>(const char);

Эта дополнительная функция должна возвращать 
1, если символ char следует копировать в строку dst, и 
0 в противном случае. 

Объявите в любом допустимом месте программы такую функцию, которая запрещает копирование всех латинских символов:
a-z и A-Z.

В функции copy_string реализовать копирование строки из src в dst 
с проверкой допустимости копирования символов. 

Если символ копировать запрещено, то он пропускается. 
Строка dst должна быть корректной Си-строкой (в конце всегда должен быть символ '\0').

Вызовите функцию copy_string для копирования строки str в строку str2 
с запретом копирования любых символов латинского алфавита. Выведите полученную строку str2 в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.5.3

Sample Input:

HelloСергею Балакиреву и всем остальным ученикам!

Sample Output:

Сергею Бал

https://stepik.org/lesson/1191306/step/5?unit=1204294

*/