#include <stdio.h>
#include <stdlib.h>

typedef struct tag_vector {
    double x;
    double y;
} VECTOR;

VECTOR create_vector( double x, double y ) {
    return ( VECTOR ) { x, y };
}

VECTOR sum_vector( const VECTOR* v1, const VECTOR* v2 ) {
    return ( VECTOR ) { v1->x + v2->x, v1->y + v2->y };     
} 


void isum_vector( VECTOR* v1, const VECTOR* v2 ) {
    v1->x += v2->x;
    v1->y += v2->y;
} // isum_vector() изменяет координаты первой переданной структуры

int main() {

    VECTOR bias = create_vector( 2.56, -7.88 );
    VECTOR one = { 1.0, 1.0 };
    VECTOR result = sum_vector( &bias, &one );

    printf( "result.x = %.2f, result.y = %.2f\n", result.x, result.y );      

    isum_vector( &bias, &one );  
    isum_vector( &bias, &( VECTOR ) { 0.5, -0.5 } );  

    return 0;
}

// struct tag_vector* bias = create_vector( 2.56, -7.88 );
// printf( "bias.x = %.2f, bias.y = %.2f\n", bias->x, bias->y );

// free( bias ); // это более тонкий процесс

// // struct tag_vector bias = create_vector( 2.56, -7.88 );
// // printf( "bias.x = %.2f, bias.y = %.2f\n", bias.x, bias.y );

// struct tag_vector v = { 1.0, 2.0 };  // Declare a variable of type struct tag_vector with values 1 and 2
// struct tag_vector *ptr_v;  // Declare a pointer of type struct tag_vector

// ptr_v = &v;

// (*ptr_v).x = 10.0;
// double y = (*ptr_v).y; // круглые скобки вокруг указателя обязательны

// ptr_v->x = 10.0; // используется операция «->», то звездочку перед указателем записывать не нужно
// y = ptr_v->y;

// ptr_v = malloc( sizeof( struct tag_vector ) );
// ptr_v->x = -1.0;
// ptr_v->y = 2.0;

// // printf("x: %.2f, y: %.2f\n", (*ptr_v).x, (*ptr_v).y );
// printf( "x = %.2f, y = %.2f\n", ptr_v->x, ptr_v->y );

// free( ptr_v );


// vector.x = 1.0;  // Access the x variable of vector
// vector.y = 2.0;  // Access the y variable of vector

// ptr_vector = &vector;  // Assign the address of vector to ptr_vector

// printf("x: %f, y: %f\n", ptr_vector->x, ptr_vector->y);  // Access the x and y variables through the pointer

// * говорит о том, что эта функция возвращает указатель
// а не саму структуру
// указатель - это всего лишь адрес структуры в памяти
// поэтому указатель выозвращается намного быстрее, чем если бы мы формировали всю 
// сложную структуру и копировали бы её в переменную типа этой структуры
// это как например есть сериал Игра перстолов
// указатель - это всё лишь ссылка на первый сезон, первую серию
// а без указателя пришлось бы копировать все серии - что заняло бы очень много времени
// потому что в сериале Игра престолов - несколько сезонов
// или представьте себе, что надо передать указатель на сериал Доктор Хаус
// вот тут мы бы точно не дождались, пока все сезоны из нашей функции не были бы возвращены назад

// struct tag_vector* create_vector( double x, double y ) {
//     struct tag_vector* v = malloc( sizeof( struct tag_vector ) );
//     v->x = x;
//     v->y = y;

//     return v;
// }

// struct tag_vector sum_vector( const struct tag_vector v1, const struct tag_vector v2 ) {
//     struct tag_vector res = { v1.x + v2.x, v1.y + v2.y };
//     return res;
// }

// struct tag_vector create_vector( double x, double y ) {
//     struct tag_vector v = { x, y };
//     return v;
// }

// struct tag_vector sum_vector( const struct tag_vector* v1, const struct tag_vector* v2 ) {
//     struct tag_vector res = { v1->x + v2->x, v1->y + v2->y };
//     return res;
// } 
