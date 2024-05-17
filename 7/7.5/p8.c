#include <stdio.h>

typedef enum { _do=1, _re=2, _mi=3, _fa=4, _sol=5, _la=6, _si=7 } NOTES;

int get_major( NOTES );

int main ( void ) {

    for ( int i = 0; i < 5; ++ i ) {
        int x;
        scanf( "%d", &x );
        if ( get_major( x ) ) 
            printf( "%d ", x );
    }

    return 0;
}

int get_major( NOTES note ) {
    return ( note == _do || note == _mi || note == _sol );
} // _do, или _mi, или _sol