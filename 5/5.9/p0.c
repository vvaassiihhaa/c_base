#include <stdio.h>
#include <string.h>

int main ( void ) {
	char s_1[100] = "Source string";
	char d_1[10], d_2[20];
	
	strcpy( d_1, s_1 );
	strcpy( d_2, s_1 );
	
	puts( d_1 );
	puts( d_2 );
	
	return 0;
}
