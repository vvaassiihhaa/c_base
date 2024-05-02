#include <stdio.h>
#include <string.h>

int main ( void ) {
    char s_1[100] = "Source string";
    char d_1[10], d_2[20];

    int max_len = sizeof ( d_1 ) - 1;
    strncpy ( d_1, s_1, max_len );
    d_1[max_len] = '\0';
    strncpy( d_2, "Balakirev", 5 );
    d_2[max_len] = 0;

    puts( d_1 );
    puts( d_2 );

    return 0;
}