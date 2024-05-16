#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short* data = malloc( sizeof( short ) * 4 );  // четыре элемента из кучи 
    
    *( data++ ) = -4;
    *( data++ ) = 3;
    *( data++ ) = 0;
    *( data++ ) = 100;  

    for ( int i = 0; i < 4; ++i )
      --data;
    
    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    free( data );
    return 0;
}