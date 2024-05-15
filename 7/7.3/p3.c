#include <stdio.h>
#define START_STEP  0

int get_step(int start)
{
    static int step = START_STEP;
    return start + step++;
}

int main(void)
{
    printf("step: %d\n", get_step(5));
    printf("step: %d\n", get_step(5));
    printf("step: %d\n", get_step(5));

    return 0;
}