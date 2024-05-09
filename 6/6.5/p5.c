#include <stdio.h>

int is_odd      ( int );
int is_positive ( int );
int is_negative ( int );
int deflt       ( int );

int sum_ar(const int *ar, size_t len_ar, int ( * nado ) ( int x ) ) {
    int S = 0;
    for ( int i = 0; i < len_ar; ++i )
        if ( nado( ar[ i ]) )
            S += ar[ i ];
    return S;   
}

int main(void)
{
    // здесь массив указателей funcs на критериальные функции
    // int ( * funcs ) [] = { is_odd, is_positive, is_negative, deflt };
    int ( * funcs[] ) ( int ) = { is_odd, is_positive, is_negative, deflt };

    int marks[20] = {0};

    int item = 0;
    scanf( "%d", &item ); // выбор критерия суммирования

    int x, count = 0;
    while( scanf( "%d", &x ) == 1 ) 
        if ( count < 20 ) marks[ count++ ] = x;

    int sum = 0; // переменная для хранения суммы
    switch( item ) {
        case 1: sum = sum_ar( marks, count, is_odd );      break;
        case 2: sum = sum_ar( marks, count, is_positive ); break;
        case 3: sum = sum_ar( marks, count, is_negative ); break;
        default: sum = sum_ar( marks, count, deflt );      break;
    }

    printf("%d", sum);

    return 0;
}

int is_odd      ( int x ) {
    return x % 2 != 0;
} 
int is_positive ( int x ) {
    return x > 0;
}
int is_negative ( int x ) {
    return x < 0;
}
int deflt       ( int x ) {
    return 1;
}

/*

Подвиг 5. Продолжите программу. 

Необходимо объявить четыре критериальных функции 
для отбора целочисленных значений при суммировании в функции sum_ar. 

Все критериальные функции должны иметь сигнатуру:

int <имя функции>(int );
и быть следующими:

is_odd: возвращает 1 для нечетных значений и 0 для четных;
is_positive: возвращает 1 для неотрицательных значений и 0 для отрицательных;
is_negative: возвращает 1 для отрицательных значений и 0 для неотрицательных;
deflt: возвращает 1 для любых значений.

В функции sum_ar реализовать подсчет целых чисел переданного массива ar, 
для которых критериальная функция (переданная через указатель) 
возвращает истину (не нулевое значение). 
Функция sum_ar должна возвращать вычисленную сумму.

В функции main объявить массив указателей с именем funcs 
на объявленные критериальные функции (в порядке их перечисления в задании). 

Затем, сформировать массив marks из прочитанных целочисленных значений 
в количестве не более 20 
(необходима проверка на максимальное количество записываемых данных). 

После этого в операторе switch выполнить подсчет суммы 
с указанием соответствующей критериальной функции из массива funcs.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.5.5

Sample Input:

1 5 4 3 5 6 78 89 56  43  456 45 645 45 44 3 1 4
Sample Output:

884

https://stepik.org/lesson/1191306/step/7?unit=1204294

*/