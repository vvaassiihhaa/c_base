#include <iostream>
#define MAX_SIZE    20  

namespace array_alg {
    typedef int ( *PTR_FILTER_FUNC ) (int);

    size_t filter_int( int* ar, size_t len_ar, PTR_FILTER_FUNC func ) {
        size_t new_len = 0;
        for ( size_t i = 0; i < len_ar; ++i ) 
            if ( func( ar[i] ) ) 
                ar[ new_len++ ] = ar[i];           
        
        return new_len;
    }
    namespace filter_func {
        int even( int value ) {
            return value % 2 == 0;
        }
    }
}

int main () {

    int  ar[ MAX_SIZE ] = { 0 };

    size_t count = 0;
    while ( count < MAX_SIZE && std::cin >> ar[ count ] ) 
        ++count;

    count = array_alg::filter_int( ar, count, array_alg::filter_func::even );  

    for ( size_t i = 0; i< count; ++i ) 
        std::cout << ar[i] << ' ';

    return 0;
}