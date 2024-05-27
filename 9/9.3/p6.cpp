#include <iostream>

enum {
    max_size_ar = 20
};

int main() {

    short data[ max_size_ar ];
    char ch;

    int i = 0;
    while ( i < max_size_ar && std::cin >> data[i] ) {
        std::cout << data[i] << " ";
        i++;
        std::cin >> ch;        
    }
    
    std::cout << std::endl;

    return 0;
}


// 9; 11; 0; -9; 3; 100; 8; 7; 4

    // int i = 0;
    // while ( i < max_size_ar && std::cin >> data[i] ) {
    //     std::cout << data[i] << " ";
    //     i++;
    // }

    // std::cout << std::endl;
