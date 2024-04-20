#include <stdio.h>

int main(void)
{
    int s = 0, n = 0;

    // scanf("%d", &n);
    n = 10;

    // int i = 5;
    // while(i++ <= n)
    //     s += i;
  for( int i = 6; i <= n + 1; ++i )
       s += i;

    printf("%d\n", s);

    return 0;
}

// command + /
// клавишка COMMAND + / позволяет сразу нарисовать комментарий ( две палки // ) 