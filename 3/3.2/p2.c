#include <stdio.h>

int main(void)
{
    short x, y;
    if(scanf("%hd, %hd", &x, &y) != 2) {
        printf("Input error.");
        return 0;
    }

    short min;
        
    if ( x < y ) {
        min = x;
    }         
    else {
        min = y;    
    }        
    
    printf( "%d", min );
    
    // Определите минимальное из введенных чисел x и y
    // присвойте найденное минимальное значение переменной min
    // и выведите ее значение в консоль в виде одного целого числа

    return 0;
}