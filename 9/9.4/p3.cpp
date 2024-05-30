namespace triangle {

  int perimetr( int a, int b, int c ) {
    return a + b + c;
  } 

}

namespace rectangle {

  int perimetr( int width, int height ) {
    return ( width + height ) * 2;
  }

}

#include <iostream>

int main() { 
 
  int a0, a1, a2;
  std::cin >> a0 >> a1 >> a2;
  int res_triangle, res_rectangle;
  res_triangle = triangle::perimetr( a0, a1, a2 );
  res_rectangle = rectangle::perimetr( a0, a1 );

  std::cout << res_triangle << " " << res_rectangle;

  return 0;
}

// прочитайте из входного потока три целых числа a0, a1, a2, записанных в одну строчку через пробел