#include <iostream>

enum {
    max_size_ar = 20
};

int main() {
    int data[ max_size_ar ];

    int i = 0;
    while ( i < max_size_ar && std::cin >> data[i] ) {
        std::cout << data[i] << " ";
        i++;
    }

    std::cout << std::endl;
    
    return 0;
}

// std::cout << "" << std::endl;