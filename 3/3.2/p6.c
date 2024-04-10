#include <iso646.h>
#include <stdio.h>

int main( void ) {
    int d;
    scanf( "%d", &d );
    if ( d < 1 or d > 7 ) printf( "не верный номер дня недели" );
    if ( d == 1 ) printf( "понедельник" );
    if ( d == 2 ) printf( "вторник" );
    if ( d == 3 ) printf( "среда" );
    if ( d == 4 ) printf( "четверг" );
    if ( d == 5 ) printf( "пятница" );
    if ( d == 6 ) printf( "суббота" );
    if ( d == 7 ) printf( "воскресенье" );
    
    return 0;
}

// понедельник, вторник, среда, четверг, пятница, суббота, воскресенье