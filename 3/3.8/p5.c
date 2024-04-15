#include <stdio.h>

#define CELL_N(N)   cell_ ## N

int main(void)
{
    short cell_1 = 1, cell_2 = 2, cell_3 = 3;
    int n = 2;

    int res_1 = 11;
    int res_2 = CELL_N(n) * 2;
    int res_3 = cell_1 + 2 * 3;

    return 0;
}

