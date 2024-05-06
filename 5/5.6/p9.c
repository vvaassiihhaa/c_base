#include <stdio.h>
#include <stdlib.h> // здесь описана функция rand()

#define SIZE    10
#define MINES   12

int main(void)
{
    char pg[SIZE][SIZE] = {0};

    int mines;

    while ( mines < MINES ) {
        int x = rand() % SIZE;
        int y = rand() % SIZE;

        int mine = 0;

        if ( pg[x][y] != '*' ) {
            for ( int i = -1; i <= 1; ++i )
              for ( int j = -1; j <= 1; ++j )
                if ( x + i >= 0 && x + i < SIZE && y + j >= 0 && y + j < SIZE )
                  if ( pg[x + i][y + j] == '*' )
                    mine = 1;

            if ( mine == 0 ) {
                pg[x][y] = '*';
                mines++;
            }
        }
    }
        
      
    

    // __assert_verify_pg(pg); // для тестирования (не убирать и должна идти непосредственно перед return 0)
    return 0;
}

/*

Подвиг 9* (классический). 

Напишите программу в которой на двумерное игровое поле размерностью 10 x 10 

случайным образом размещаются 12 "мин" так, чтобы они не соприкасались друг с другом 

(вокруг клетки с миной не должно быть других мин). 

Игровое поле должно быть представлено двумерным массивом с именем pg, 
типом char и размерностью 10 х 10. 

Пустые клетки (без мин) должны принимать значение 0, а клетки с минами помечаются символом '*'.

P. S. В консоль ничего выводить не нужно.

https://stepik.org/lesson/1191296/step/11?unit=1204284

*/