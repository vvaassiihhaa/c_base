#include <stdio.h>

typedef struct {
    double re; // действительная часть 
    double im; // мнимая часть
} COMPLEX;

COMPLEX complex_sum( COMPLEX, COMPLEX );

int main(void)
{
    COMPLEX cmp_1;
    COMPLEX cmp_2;

    scanf( "%lf %lf %lf %lf", &cmp_1.re, &cmp_1.im, &cmp_2.re, &cmp_2.im );
    COMPLEX res = complex_sum( cmp_1, cmp_2 );

    return 0;
}

COMPLEX complex_sum( COMPLEX cx1, COMPLEX cx2 ) {
    COMPLEX cx;
    cx.re = cx1.re + cx2.re; // складываются отдельно действительные части (re)
    cx.im = cx1.im + cx2.im; // и мнимые (im)
    return cx;
}

// a + j * b = (a1 + a2) + j * ( b1 + b2 ) 

// typedef struct {
//     double re; // действительная часть 
//     double im; // мнимая часть
// } COMPLEX;
// return (COMPLEX) { 0, 0 };

    // return (COMPLEX) { cx1.re + cx2.re, cx1.im + cx2.im };   