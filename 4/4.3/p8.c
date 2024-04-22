#include <stdio.h>

int main( void ) {
    int a = 100, b = 150;
    scanf("%d %d", &a, &b);

    int n1, n2, n3;

    while ( a <= b ) {
        n1 = a / 100;
        n2 = (a / 10) % 10;
        n3 = a % 10;
        if ( n1 != n2 && n1!= n3 && n2!= n3 ) 
        printf("%d ", a);
        a++;
    }

    return 0;
}

/*

Подвиг 8 (на повторение). 

Напишите программу, которая среди целых положительных трехзначных чисел в диапазоне от a до b включительно, 

выбирает только те, у которых все цифры разные. 

Значения a, b читаются из входного потока, записанные в одну строчку через пробел. 

Выведите в консоль все найденные числа с неповторяющимися цифрами в одну строчку через пробел в порядке возрастания.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.3.8

Sample Input:
100 150

Sample Output:
102 103 104 105 106 107 108 109 120 123 124 125 126 127 128 129 130 132 134 135 136 137 138 139 140 142 143 145 146 147 148 149 150

https://stepik.org/lesson/1191286/step/10?unit=1204274

*/