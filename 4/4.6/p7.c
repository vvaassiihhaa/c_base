#include <stdio.h>

int main(void)
{
    if( global_ptr != NULL )
        *global_ptr = 10;    

    return 0;
}

/*

Подвиг 7. Продолжите программу. 

По указателю global_ptr типа int необходимо выполнить запись целочисленного значения 10 в том случае,
если global_ptr ссылается на выделенную область памяти.

Указатель global_ptr в программе не отображается, но он объявлен и существует.

P. S. В консоль ничего выводить не нужно.

https://stepik.org/lesson/1191289/step/9?unit=1204277

*/