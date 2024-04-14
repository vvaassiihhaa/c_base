#include <stdio.h>
#define MAX_BUFF_SIZE 1024  

int main ( void ) {
    int buff_size;
    scanf("%d", &buff_size);

    ( buff_size > MAX_BUFF_SIZE ) ? buff_size = MAX_BUFF_SIZE : "";

    printf( "%d\n", buff_size );

    return 0;
}


/*

Подвиг 9. Напишите программу, в которой объявляется макрос с именем 
MAX_BUFF_SIZE со значением 1024 и выполняется чтение (в функции main()) 
целочисленного положительного значения в целочисленную переменную buff_size. 

С помощью тернарного условного оператора скорректируйте значение переменной buff_size, 
чтобы оно не превосходило значения MAX_BUFF_SIZE. 

Итоговое значение переменной buff_size выведите в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.7.9

Sample Input:
1048

Sample Output:
1024

*/