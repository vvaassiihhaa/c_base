#include <stdio.h>

int main(void)
{
    short ar_rnd[64] = { 0 };

    for ( int i = 0; i < 5; i++ )
        scanf( "%hd", &ar_rnd[i] );

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 8. В программе ниже в функции main() объявите массив типа short, именем ar_rnd и длиной 64 элемента. 

Проинициализируйте этот массив нулями (используя инициализацию, а не присваивание). 

Прочитайте из входного потока пять целых чисел, записанных в одну строчку через пробел, 
и занесите их по порядку в первые пять элементов массива ar_rnd.

P. S. В консоль ничего выводить не нужно.

https://stepik.org/lesson/1191292/step/10?unit=1204280

*/