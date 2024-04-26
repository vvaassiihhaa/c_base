#include <stdio.h>

short marks[5] = { 0, 1, 2, 3, 4 };

int main(void)
{
    float S = 0.0;   
    size_t len_marks = sizeof( marks ) / sizeof( marks[0] ); // количество элементов массива
    for ( int i = 0; i < len_marks; i++ )
        S += marks[i];
    S /= len_marks;
    printf( "%.2f\n", S );

    return 0;
}

/*

Yaroslav Shevchenko

не забывайте приводить к типу double или float

Подвиг 9. В программе до функции main() объявлен массив с именем marks и типом элементов short. 

Этот массив скрыт в коде, но он существует.

 В функции main() вычислите среднее арифметическое значений элементов этого массива и 
 выведите в консоль полученное значение с точностью до сотых.

https://stepik.org/lesson/1191292/step/11?unit=1204280

*/