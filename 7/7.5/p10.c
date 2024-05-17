#include <stdio.h>

int main ( void ) {

    double* p1 = (void *)128000, *p2 = (void *)128064;  // тип double 64 бит
    int count = p2 - p1;

    return 0;
}