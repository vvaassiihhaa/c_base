#include <stdio.h>

int main ( void ) {

    int d = 3;
    int stars = 0;
    scanf( "%d", &d );

    for ( int i = d - 1; i >= 0; --i ) { 
      for ( int j = 0; j < i; ++ j ) {
        printf( " " );
      }
      for ( int s = 0; s < stars * 2; ++s )
        printf( "*" );
      printf( "*\n" );
      ++stars;
    }

    return 0;
}

/*

3

  *    // 2 пробела      // 1 звезда
 ***   // 1 пробел       // 3 звезды
*****  // нет пробелов   // 5 звёзд 


*/