#include <iostream>
#include <cstring>

using MEASURE = struct {
    unsigned short width; 
    unsigned short height; 
    unsigned short depth; 
};

using AUTO = struct {
    char model[50];
    unsigned short max_speed;
    double weight;
    MEASURE m;
};

int main(){

    AUTO auto_sell;
    char model[50];
    unsigned short max_speed, width, height, depth;
    double weight;

    std::cin >> model >> max_speed >> weight >> width >> height >> depth;

    strcpy( auto_sell.model,  model );
    auto_sell.weight = weight;
    auto_sell.max_speed = max_speed;
    auto_sell.m.width = width;
    auto_sell.m.height = height;
    auto_sell.m.depth = depth;  
    
    __ASSERT_TESTS__ 
    return 0;
}