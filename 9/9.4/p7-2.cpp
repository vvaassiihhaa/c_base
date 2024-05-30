#include <iostream>
#define MAX_LEN 100
#define AR_MAX_SIZE 20

namespace array_alg {

  typedef int ( *PTR_FILTER_FUNC ) (int);

  size_t add_int( int* src, size_t start, size_t max_len_src, const int* dest, size_t len_dest, PTR_FILTER_FUNC func ) {
    size_t added_count = 0;
    for ( size_t i = 0; i < len_dest; ++i ) {
        if ( func(dest[i]) ) {
            src[start + added_count] = dest[i];
            ++added_count;
        }
    }
    return start + added_count;
  }

  namespace filter_func {
    int mark_positive( int x ) {
      return ( x >= 4 );
    }
  }
}

int main()
{
    int marks[ MAX_LEN ] = {3, 2, 5, 4, 3};
    int ar[ AR_MAX_SIZE ];
    size_t count = 0, count_marks = 5;

    while ( count < AR_MAX_SIZE && std::cin >> ar[ count ] ) 
        ++count;

    count_marks = array_alg::add_int( marks, count_marks, MAX_LEN, ar, count, array_alg::filter_func::mark_positive );    

    for ( size_t i = 0; i < count_marks; ++i ) 
        std::cout << marks[i] << " ";
    
    std::cout << std::endl;

    return 0;
}

// src в этот массив добавляются значения
// start начальный индекс
// max_len_src

// dest из этого массива добавляются значения
// len_dest длина dest
// func - указатель на функцию для отбора (фильтрации) значений массива dest.  

/*

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.4.7

Sample Input:

2 5 4 3 3 2

Sample Output:

3 2 5 4 3 5 4

*/