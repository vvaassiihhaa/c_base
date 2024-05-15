#include <stdio.h>

int get_step(int start)
{
    int step = start;
    return step++;
}

int main(void)
{
    printf("step: %d\n", get_step(5));
    printf("step: %d\n", get_step(5));
    printf("step: %d\n", get_step(5));

    return 0;
}