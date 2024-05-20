#include <stdio.h>

struct tag_point {
    int x;
    int y;
    int z;
};

int main ( void ) {

    struct tag_point pt;
    size_t sz_pt = sizeof( pt );
    size_t sz_st = sizeof( struct tag_point );

    printf( "sz_pt = %lu, sz_st = %lu\n", sz_pt, sz_st );

    return 0;
}
