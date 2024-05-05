#include <stdio.h>

double get_qm( double qm_1, int m, int x ) {
    double res;
    res = ( double ) ( x + ( m - 1 ) * qm_1 ) / m;
    return res;
}

int main(void)
{
    int x;
    int m = 1;
    double qm, qm_1 = 0; // qm_1 это прошлое среднее арифметическое

    while( scanf( "%d", &x ) == 1 ) {
      qm = get_qm( qm_1, m, x );
      qm_1 = qm;
      m++;
    }

    printf( "%.3f\n", qm );

    return 0;
}

// при первом вызове m = 1 т.е. m - 1 равнно нулю
    // res = (double) ( m - 1 ) / m * qm_1 + (double) x / m;

/*
        qm_1 = qm;
        qm = (qm_1 + (double)x / m) / 2.0;
        m++;
        printf("%.4f\n", qm);
*/