#include <stdio.h>

typedef struct {
    unsigned int id;
    unsigned int width;
    unsigned int height;
    unsigned int depth;

    double weight;
} BOX;

int main ( void ) {

    FILE* fp = stdout;
    BOX b;

    scanf( "%u; %u; %u; %u; %lf",
        &b.id,
        &b.width,
        &b.height,
        &b.depth,
        &b.weight
    );

    const char f[] = "box %u: %u x %u x %u\n";
    fprintf( fp, f, b.id, b.width, b.height, b.depth );

    return 0;
}
