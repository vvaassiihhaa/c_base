#include <stdio.h>

int main( void ) {
  int a, b;             // 8 12
  int big, low;
  if ( a > b ) {
    big = a;            // 12
    low = b;            // 8
  }
  else {
    big = b;
    low = a;
  }
  while ( low > 0 ) {
    int rest = big % low; // 12 % 8 = 4
    big = low;            // 8
    low = rest;           // 4
  }

  return 0;
}	
