#include <stdio.h>

int main ( void ) {
    
    float numbers[20] = { 0.0 };
    float *ptr = &numbers[ 0 ]; 
    float S = 0.0;   
    int i = 0;
    while ( i < 20 && scanf( "%f", ptr++ ) == 1 ) 
        i++;
    
    int len = i;
    for ( i = 0; i < len; i++ )
        S += *( numbers + i );
    S = S / len;
    printf( "%.2f\n", S );

    return 0;
}

/*

Подвиг 7. Напишите программу, которая читает в массив вещественные числа из входного потока, записанные через пробел.

Чтение происходит до тех пор, пока не будет достигнут конец данных. 

Гарантируется, что максимальное количество чисел не более 20. 

Вычислите среднее арифметическое прочитанных чисел и выведите в консоль полученное значение с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.3.7

Sample Input:
0.5 -3.21 0.78 1.23 7.3 6.5

Sample Output:
2.18

https://stepik.org/lesson/1191293/step/9?unit=1204281

*/