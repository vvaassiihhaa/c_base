#include <stdio.h>

int main( void ) {
  float f1,f2,f3,f4,f5;
    
  scanf( "%*f; %*f; %*f; %*f; %*f; %f; %f; %f; %f; %f; ", &f1, &f2, &f3, &f4, &f5 );  
  printf( "%.1f %.1f %.1f %.1f %.1f", f1,f2,f3,f4,f5 );  
    
  return 0;      
} 
