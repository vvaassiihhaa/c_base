#include <stdio.h>

typedef union {
    int data_i;
    double data_d;
} DATA;

int main( void ) {
    
    DATA d;
    d = ( DATA ) 10;


    return 0;
}

// d.data_i = 12;
// d = (DATA){ .data_d = 0.5, .data_i = -5 }; 
    // d.data_i = 12;
    // d = (DATA){ .data_d = 0.5, .data_i = -5 };
    // d = (DATA){ .data_d = 0.5 };
    // d.data_d = -0.01;
    // d = (DATA)10;