#include <stdio.h>

#define SIZE    1
#define IS_CPP

int main( void ) {

    const int max_size = 5;

#ifdef(IS_CPP)
#endif    


    return 0;
}    

// https://proproprogs.ru/c_base/c_direktivy-include-i-uslovnoy-kompilyacii

// #if SIZE > 0 ... #endif
// #ifdef(IS_CPP) ... #endif При использовании #ifdef не следует заключать следующий идентификатор в скобки