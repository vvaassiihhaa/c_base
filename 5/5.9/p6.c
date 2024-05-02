#include <stdio.h>
#include <string.h>

int main(void)
{
    char ps[7][50]; 
    char ps_res[20];     

    for ( int i = 0; i < 7; i++ ) {
        scanf ( "%50s", ps[i] );
        if ( strlen( ps[i] ) % 2 == 0 ) {
            strcat( ps_res, ps[i] );
            strcat( ps_res, " " );
        }
    }            

    ps_res[ strlen( ps_res ) - 1 ] = '\0'; 

    printf( "%s", ps_res );

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

/*

            // if ( strlen( ps_res ) > 0 )
            //     strcat( ps_res, " " );


Подвиг 6. Продолжите программу, которая в массив строк ps (размерностью 7 x 50) 

читает из входного потока фамилии семи сотрудников, записанных в одну строчку через пробел. 

Считать, что максимальная длина фамилии не превышает 50 символов. 

Сформировать еще одну строку ps_res, в которую через пробел скопировать фамилии сотрудников (в порядке их считывания),
 которые имеют четную длину.
 
  В конце последней фамилии пробела быть не должно, сразу стоять символ '\0'. 
  
  Если фамилий счетными длинами нет, то формируется пустая строка. Вывести строку ps_res в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/5.9.6

Sample Input:

Ivanov Petrov Sidorov Balakirev Starostin Nikitin Sergeev
Sample Output:

Ivanov Petrov

https://stepik.org/lesson/1191299/step/8?unit=1204287

*/