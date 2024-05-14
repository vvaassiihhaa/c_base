#include <stdio.h>

void print_prime_numbers( int n );

int main ( void ) {
    int n;
    scanf( "%d", &n );
    print_prime_numbers( n );
    return 0;
}

void print_prime_numbers( int n ) {
    for ( int i = 2; i <= n; ++i )
        while ( n % i == 0 ) {
            printf( "%d ", i );
            n /= i;
        }
}

// 140
// 2 2 5 7 