#include <stdio.h>

int main(void)
{
    int var;

    scanf("%d", &var);

    int *ptr_var = &var; // Объявите указатель с именем ptr_var на переменную var. 
    char *ptr_ch; // После этого объявите еще один указатель с именем ptr_ch для типа char
    ptr_ch = (char *)ptr_var; // Присвойте ptr_ch адрес переменной var.

    printf( "%d\n", *ptr_ch ); // Выведите значение переменной

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 4. Продолжите программу. 

Объявите указатель с именем ptr_var на переменную var. 

После этого объявите еще один указатель с именем ptr_ch для типа char и присвойте ему адрес, хранимый указателем ptr_var. 

(Не забудьте прописать операцию приведения типов.) Выведите в консоль целочисленное значение, на которое ссылается указатель ptr_ch.

Sample Input:
1037

Sample Output:
13

https://stepik.org/lesson/1191289/step/6?unit=1204277

*/

