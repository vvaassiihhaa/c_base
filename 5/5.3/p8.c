#include <stdio.h>

int main(void)
{  
    short var_1 = 7356;
    int var_2 = 6575729;
    long long var_3 = 100433564;

    int len = sizeof( short ) + sizeof( int ) + sizeof( long long );

    unsigned char mas[ len ]; 

    unsigned char *ptr_1 = (unsigned char *)&var_1;
    unsigned char *ptr_2 = (unsigned char *)&var_2;
    unsigned char *ptr_3 = (unsigned char *)&var_3; 

    scanf( "%hd, %d, %lld", &var_1, &var_2, &var_3 );

    for( int i = 0; i < sizeof(short); i++ )
        *( mas + i ) = *( ptr_1 + i );

    for( int i = 0; i < sizeof(int) ; i++ )
        *( mas + i + sizeof(short) ) = *( ptr_2 + i );

    for( int i = 0; i < sizeof(long long); i++ )
        *( mas + i + sizeof(short) + sizeof(int) ) = *( ptr_3 + i );
    
    for ( int i = 0; i < len; i++ )
        printf( "%u ", *( mas + i ) ); // unsigned char

    return 0;
}

/*

Подвиг 8. Продолжите программу. 

Прочитайте из входного потока целые числа в переменные var_1, var_2 и var_3, записанные в одну строчку через запятую. 

Побайтно занесите их значения в массив типа char (в порядке var_1, var_2, var_3).

Выведите в одну строчку по порядку значения массива в виде беззнаковых десятичных чисел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.3.8

Sample Input:
7356, 6575729, 100433564

Sample Output:
188 28 113 86 100 0 156 126 252 5 0 0 0 0

https://stepik.org/lesson/1191293/step/10?unit=1204281

*/