#include <iostream>

int main() {
    int a, b; // a < b

    std::cin >> a >> b; // читает из входного потока stdin два целых числа a и b

    for ( int i = a; i <= b; i++ ) 
        if ( i % 3 == 0 ) 
            std::cout << i << " "; // выводит в выходной поток stdout числа, кратные 3, в промежутке от a до b

    return 0;
}

// std::cout << "" << std::endl;
// 3 16