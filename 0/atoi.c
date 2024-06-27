#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *str = ":456";
    str = str + 1; // передвигаем указатель на символ, следующий за двоеточием
    int result = atoi( str );
    printf( "result =  %d\n", result);
    return 0;
}