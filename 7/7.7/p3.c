#include <stdio.h>
#include <stdlib.h>

struct tag_rub {
    double ratio_usd;   // курс доллара к рублю ( 1$ = xx рублей )
    int rubs;           // количество рублей
};

double rub_to_usd( struct tag_rub* account_r );

int main( void ) {
    
    struct tag_rub* account_r = malloc( sizeof( struct tag_rub ) );
    account_r->ratio_usd = 91.32;
    scanf( "%d", &account_r->rubs );

    double res = rub_to_usd( account_r );
    printf( "%.2f", res );

    free( account_r );
    return 0;
}

double rub_to_usd( struct tag_rub* account_r ) {    
    return (double) account_r->rubs / account_r->ratio_usd;
}