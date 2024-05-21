#include <stdio.h>

struct tag_price {
    char name[100];
    unsigned int rubs;
    unsigned short kops;
    unsigned int foreign_key;
};

int main(void)
{
    struct tag_price price_100 = { "name", 2, 3, 4 };
    struct tag_price pr;
    pr = price_100;
    printf( "%s %d %d %d", pr.name, pr.rubs, pr.kops, pr.foreign_key );

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}