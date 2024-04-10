#include <stdio.h>

int main(void)
{
    char menu_item;
    short menu_number = 0;

    printf("a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");

    if(scanf("%c", &menu_item) != 1) {
        printf("Input error.");
        return 0;
    }

    menu_number = -1; // если menu_number сразу проинициализировать как -1, можно обойтись без default
    // Иван Чубинец ( 4 дня назад ) https://stepik.org/users/233265698/profile

    switch(menu_item) {
        case 'a': case 'A': menu_number = 1; break;
        case 'b': case 'B': menu_number = 2; break;
        case 'c': case 'C': menu_number = 3; break;
        case 'd': case 'D': menu_number = 4; break;
    }

    printf("%d\n", menu_number);
    

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}