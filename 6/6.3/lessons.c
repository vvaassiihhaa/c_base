#include <stdio.h>
#include "func.h" // per_sq здесь прототип функции per_sq

int main( void ) {
	
	printf( "per = %.2f\n", per_sq( 2.5, 3.5 ) );
	
    return 0;
}

// double per_sq( double w, double h );
