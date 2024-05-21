#include <stdio.h>

enum  { total_points = 100 };

struct tag_point_3d {
    int x;
    int y;
    int z;
};

int main(void)
{
    struct tag_point_3d points [ total_points ];

    int count = 0;
    int x, y,z ;

    while ( scanf( "%d %d %d", &x, &y, &z ) == 3 ) {
      points[ count ].x = x;
      points[ count ].y = y;
      points[ count ].z = z;
      ++count;
    }

    --count;
    printf( "%d %d %d", points[ count ].x, points[ count ].y, points[ count ].z );


    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

// 1 2 3 3 4 5 7 8 9