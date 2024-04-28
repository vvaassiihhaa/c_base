#include <stdio.h>

#define TOTAL     20

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while(count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;

    int pos;
    for ( int i = count / 2 ; i < count ; ++i ) {
        pos = i;
        for ( int j = i + 1; j < count; ++j ) {
            if ( ws[j] > ws[pos] ) {
                pos = j;
            }
        }
        if ( pos!= i ) {
            float temp = ws[i];
            ws[i] = ws[pos];
            ws[pos] = temp;
        }
    }

    for ( int i = 0; i < count; ++i ) {
        printf("%.2f ", ws[i]);
    }    
    

    return 0;
}

/*

Подвиг 8. Продолжите программу. 

Выполните сортировку второй половины массива ws по убыванию (невозрастанию), 

используя метод сортировки выбором. 

То есть, сортировать нужно элементы с индексами от count/2 до count-1 включительно. 

Выведите в консоль все полученные значения массива ws (первые count элементов) 
в одну строчку через пробел с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.8

Sample Input:

0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1.0 1.1
Sample Output:

0.10 0.20 0.30 0.40 0.50 1.10 1.00 0.90 0.80 0.70 0.60

https://stepik.org/lesson/1191295/step/10?unit=1204283

*/