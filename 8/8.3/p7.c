#include <stdio.h>

enum {
    max_length_ar = 20
};

int main ( void ) {

    double temp [ max_length_ar ];
    int count = 0;

    FILE* fp = stdin;

    while ( count < max_length_ar && fscanf( fp, "%lf", &temp[ count ] )== 1 )
        ++count;

    for ( int i = 0; i < count; ++i )
        if ( temp[ i ] > 0 )
            printf( "%.2f ", temp[ i ] );



    return 0;
}
