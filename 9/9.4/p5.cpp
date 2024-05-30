#include <iostream>

#define MAX_SIZE 20

namespace array_alg {

  enum TYPE_SORT {
    sort_asc,
    sort_desc
  };

  void sorted_int( int* ar, size_t len_ar, TYPE_SORT type ){
    
    int pos;
    for( size_t i = 0; i < len_ar-1; ++i ) {
      pos = i;
      for( size_t j = i+1; j < len_ar; ++j ) {
        if ( type == sort_asc && ar[pos] > ar[j] )
          pos = j;
        if ( type == sort_desc && ar[pos] < ar[j] )
          pos = j;
      }
      if( pos != i ) {
        int t   = ar[i];
        ar[i]   = ar[pos];
        ar[pos] = t;
      }
    }    
  }

}

int main() {

    int ar[ MAX_SIZE ] = { 0 };
    int count = 0;

    // читаем из входного потока stdin целые числа в массив ar
    while( count < MAX_SIZE && std::cin >> ar[ count++ ] ) {} 

    --count;

    array_alg::sorted_int( ar, count, array_alg::sort_desc );

    for( int i = 0; i < count; ++i ) 
      std::cout << ar[ i ] << ' ';

    return 0;
}

// 45 324 645 324 2 -10 11 0 -54 2