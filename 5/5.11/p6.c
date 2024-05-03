#include <stdio.h>
#include <stdlib.h> // atof
#include <string.h> // strchr

int main ( void ) {

    char str[100] = { 0 };
    fgets( str, sizeof( str ) - 1, stdin ); // https://vvaassiihhaa.github.io/posts/puts/

    char* ptr = strchr( str, ':' ); // указатель на двоеточие
    float S = atof( ptr + 1 ); 
    int i = 1;
    while ( ( ptr = strchr( ptr + 1, ',' ) ) != NULL && i < 20 ) {
      S += atof( ptr + 1 );
      ++i;
    }
    printf( "%.3f", S / i );

    return 0;
}

/*

http://all-ht.ru/inf/prog/c/func/strchr.html
http://all-ht.ru/inf/prog/c/func/atof.html

// scanf("%s", str ); // Функция сканф не подходит, так как она считывает информацию только до пробельного символа

Подвиг 6. Напишите программу, которая читает строку, представленную в формате:

<имя студента>: <оценка 1>, <оценка 2>, ..., <оценка N>

Все оценки представлены целыми числами. Количество оценок может быть разным у разных студентов, но не более 20.

Необходимо вычислить среднее арифметическое оценок и полученное вещественное число вывести в консоль с точностью до тысячных.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.11.6

Sample Input:

Балакирев: 2, 2, 2, 5, 5, 2, 2, 5
Sample Output:

3.125

https://stepik.org/lesson/1191301/step/8?unit=1204289

*/