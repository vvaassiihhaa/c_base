#include <stdio.h>

extern int ex_var_1;
extern int ex_var_2 = 7;

int main(void)
{
    printf("%d", ex_var_1);
    return 0;
}

int ex_var_1 = 10;