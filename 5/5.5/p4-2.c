// автор - Мамонов Сергей

#include <stdio.h> 

#define TOTAL 10

int main ( void ) {
  int digs[ TOTAL ] = { 0 };
  size_t count = 0;
  size_t sz_ar = sizeof( digs ) / sizeof( *digs );

  while ( count < sz_ar && scanf( "%d", &digs[ count ] ) == 1 )
    count++;
      
  int num = -1;
  
  for ( int i = 0; i < count; ++i ) 
    if ( digs[ i ] == 5 ) {
	    count = count < TOTAL ? count + 1 : count;
	    for ( int j = count - 1; j > i; j-- )
	      digs[ j ] = digs[ j - 1 ];          // сдвигаем что можно - вправо 
      if ( i + 1 < TOTAL )   
	      digs[ i + 1 ] = num--;               
	  }                                       
  
  for ( int i = 0; i < count; i++ )
    printf( "%d ", digs[ i ] );
  
  return 0;
}

/*
Sample Input:
1 2 5 3 5 4 5 6 

  // int indx = -1; // попробую вот это убрать из кода ниже
*/

// автор - Сергей Мамонов

// https://stepik.org/lesson/1191295/step/6?discussion=9121391&thread=solutions&unit=1204283
