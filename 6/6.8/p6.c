#include <stdarg.h>
#include <stdio.h>

void ar_fill ( double mas[], size_t mas_len, ... );

int main ( void ) {
	
	double weights[ 10 ] = { 0.0 }; 
	ar_fill( weights, 5, 0.1, 0.2, 0.3, 0.4, 0.5 );
	
	return 0;
}

void ar_fill ( double mas[], size_t mas_len, ... ) {
	
	va_list arg;
	va_start( arg, mas_len ); 
	
	for ( size_t i = 0; i < mas_len; ++i )
	    mas[ i ] = va_arg(arg, double);	
	
	va_end( arg );
}

// 0.1, 0.2, 0.3, 0.4, 0.5