#include <stdio.h>

typedef struct {
    unsigned old    :  7; // 7
    unsigned salary : 20; // 27
    unsigned height :  8; // 35
    unsigned weight :  7; // 42 бита
} PERSON_DATA;

int main( void ) {
    
    PERSON_DATA pd;
    pd.old = 45;
    pd.salary = 876043;
    pd.height = 186;
    pd.weight = 83;

    printf( "%lu\n", sizeof( pd ) );

    return 0;
}