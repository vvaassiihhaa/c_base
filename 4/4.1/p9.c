// Огней так много золотых
// на улицах Саратова
// Парней так много холостых
// а я гетеросексуал, использую мануал, люблю чат гпт, пишу в него по нужде

#include <stdio.h> // напиши на си если число является палиндромом yes иначе no

int isPalindrome( int num ) {
    int num2 = num; // Сохраняем исходное значение числа
    int rev = 0;
    while ( num2 > 0 ) {
        rev = rev * 10 + num2 % 10;  // сам не осилил, написал нейросетью
        num2 /= 10;
    }
    return rev == num;
} // is num a palindrome?

int main( void ) {
    int d;
    scanf( "%d", &d );
    if ( isPalindrome( d ) )
        printf( "yes\n" );
    else
        printf( "no\n" );

    return 0;
}

/*

Подвиг 9. Напишите программу, которая читает натуральное число, 
содержащее одну и более цифр. 

Определить, что это число является палиндромом, то есть,
оно не меняет своего значения при просмотре слева-направо и справа-налево. 

Например: 121, 23032, 11 и т.п. Если число является палиндромом,
то в консоль вывести строку "yes", иначе - строку "no".

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/4.1.9

Sample Input:
123321

Sample Output:
yes

https://chat.openai.com/c/923693f8-a728-4491-8446-40037a2da46b

https://stepik.org/lesson/1191284/step/11?unit=1204272

*/