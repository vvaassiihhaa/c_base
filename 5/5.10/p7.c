#include <stdio.h>
#include <string.h>

int main ( void ) {

    int number_of_cities = 0;
    char city[50];
    char cities[500];

    while ( number_of_cities < 10 ) {
        scanf( "%s", city );
        if ( strlen( city ) > 0 )  {
            ++number_of_cities;
            if ( strstr( cities, city ) == NULL ) { // если город еще не встречался
                strcat( cities, city );
                strcat( cities, " " );
            }
        }
    }
    cities[ strlen( cities ) - 1 ] = '\0'; 
    printf( "%s\n", cities );    

    return 0;
}   

/*

Подвиг 7. Напишите программу, в которой с каждой новой строки вводятся названия городов. 

Пустая строка должна быть проигнорирована. Максимум может быть введено 10 городов. 

Максимальная длина названия не превышает 50 символов. 

Сформировать строку, в которой названия городов идут по порядку (считывания) через пробел без дублирования, 
то есть, повторяющиеся названия отбрасывать. Вывести сформированную строку в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.10.7

Sample Input:

Барнаул
Кишинев
Ярославль
Николаев

Уфа
Москва
Санкт-Петербург
Николаев
Самара
Воронеж

Смоленск
Sample Output:

Барнаул Кишинев Ярославль Николаев Уфа Москва Санкт-Петербург Самара Воронеж

https://stepik.org/lesson/1191300/step/9?unit=1204288

*/