#include <stdio.h>

typedef enum {
    param_int = 1, 
    param_double = 2
} TYPE_PARAM; // перечисление с типом TYPE_PARAM

typedef union {
    int data_i;
    double data_d;
} DATA; // объединение с типом DATA

DATA sum_ar( DATA [], size_t, TYPE_PARAM );

int main(void) {
    DATA res_1 = sum_ar((DATA[]) { {1}, {2}, {3}, {4}, {5} }, 5, param_int);
    DATA res_2 = sum_ar((DATA[]) { {.data_d=1.1}, {.data_d=2.2}, {.data_d=3.3}, {.data_d=4.4}, {.data_d=5.5} }, 5, param_double);
    // Результат сохранен в res_1 и res_2

    return 0;
}

DATA sum_ar( DATA array[], size_t length, TYPE_PARAM type ) {
    DATA sum = { 0 };
    if ( type == param_int ) 
        for ( size_t i = 0; i < length; ++i ) 
            sum.data_i += array[i].data_i;
    else 
        for ( size_t i = 0; i < length; ++i ) 
            sum.data_d += array[i].data_d;
    
    return sum;
}