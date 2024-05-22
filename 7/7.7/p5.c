#include <stdio.h>

typedef struct {
    int var_i;
    double var_d;
} VAR;


int main( void ) {

    VAR d;
    d = (VAR){10};
    printf( "%d %f\n", d.var_i, d.var_d );

    return 0;
}