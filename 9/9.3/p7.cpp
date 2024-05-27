#include <iostream>

enum {
    max_size_name = 50
};

typedef struct {
    unsigned int id;
    char name [ max_size_name ];
    double weight;
    unsigned int price;
} THING;

int main() {

    THING box;
    std::cin >> box.id >> box.name >> box.weight >> box.price;
    std::cout << box.name << ' ' << box.id << ": ";
    std::cout << box.weight << ", " << box.price << std::endl;

    return 0;
}

// <название> <идентификатор>: <вес>, <цена>

// id; идентификатор; тип unsigned int;
// name; название (строка); максимальная длина max_size_name = 50
// weight; вес; тип double;
// price; цена; тип unsigned int.
