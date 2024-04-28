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
    for ( int i = 0; i < count; ++i ) {
        pos = i;
        for ( int j = i + 1; j < count; ++j ) {
            if ( ws[j] < ws[pos] ) {
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

        //  int pos;
        //  for(int i = 0; i < size-1; ++i) {
        //            pos = i;
        //            for(int j = i+1; j < size; ++j) {
        //                     if(a[pos] > a[j])
        //                               pos = j;
        //            }
        //            if(pos != i) {
        //                     int t = a[i];
        //                     a[i] = a[pos];
        //                     a[pos] = t;
        //            }
        //  }
 
        //  for(int i = 0; i < size; ++i) 
        //            printf("%d ", a[i]);    

    return 0;
}

/*

Подвиг 7. Продолжите программу. 

Выполните сортировку массива ws по возрастанию (неубыванию), 

используя метод сортировки выбором. 

Сортировать нужно только первые count элементов. 

Выведите в консоль значения отсортированного массива ws (первые count элементов) 

в одну строчку через пробел с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.5.7

Sample Input:
0.4 6.7 1.2 -5.8 3.3 21.0 4.35

Sample Output:
-5.80 0.40 1.20 3.30 4.35 6.70 21.00

https://stepik.org/lesson/1191295/step/9?unit=1204283

*/