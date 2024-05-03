#include <stdio.h>
#include <string.h>

int main ( void ) {

    int h, m, s;
    scanf( "%d %d %d", &h, &m, &s ); // читаем часы, минуты и секунды

    char hs[3];
    sprintf( hs, "%02d", h );
    if ( h < 0 || h > 23 ) strcpy( hs, "--" );

    char ms[3];
    sprintf( ms, "%02d", m );
    if ( m < 0 || m > 59 ) strcpy( ms, "--" );

    char ss[3];
    sprintf( ss, "%02d", s );
    if ( s < 0 || s > 59 ) strcpy( ss, "--" );

    const char format[] = "%.2s:%.2s:%.2s";
    char info[8];
    sprintf( info, format, hs, ms, ss );

    puts( info );

    return 0;
}


/*

Подвиг 2. Напишите программу, которая читает из входного потока три целых числа, 
записанных в одну строчку через пробел, в переменные h, m, s. 
Здесь h - часы; m - минуты; s - секунды. 

На основе этих значений сформировать строку в формате:

hh:mm:ss

Если значение переменных h, m, s выходит за допустимый диапазон (h: [0; 23], m: [0; 59], s: [0; 59]), 
то вместо соответствующего значения прописать два символа дефиса '--'. Выведите сформированную строку в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.2

Sample Input:

12 68 10
Sample Output:

12:--:10

https://stepik.org/lesson/1191301/step/4?unit=1204289

*/