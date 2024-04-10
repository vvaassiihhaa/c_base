#include <stdio.h>

int main( void ) {
  int a, b, h; 
  scanf( "%d, %d, %d", &a, &b, &h );
  printf( "%.1f", 0.5 * h * a + 0.5 * h * b );
    
  return 0;
}