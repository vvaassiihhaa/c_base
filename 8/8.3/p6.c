#include <stdio.h>

int main ( void ) {

    char buff [ 512 ] ;
    int w, h;
    scanf( "%d %d", &w, &h );

    sprintf( buff, "rectangle: %d; %d", w, h );
    FILE* fp = stdout;

    fprintf( fp, "%s\n", buff );

    return 0;
}
