#include <stdio.h>

int main(void)
{
    int m, n;
    if(scanf("%d, %d", &m, &n) != 2) {
        printf("Input error.");
        return 0;
    }
    int mn = m / n;
    if ( m % n == 0 ) {
        printf( "%d", mn ); 
    }
    else {
        printf( "division error" );
    }
    

    return 0;
}

/*
 Подвиг 3. Продолжите программу, представленную ниже. Если число m делится нацело на число n,
 то вывести на экран частное от деления (результат деления),
 в противном случае вывести сообщение «division error».
*/