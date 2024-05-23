#include <stdarg.h>
#include <stdio.h>

enum { 
    name_length = 50,
    total_links = 50,
    max_path_station = 100
}; // ограничения

typedef struct tag_station {
    char   name[ name_length ];                 // название станции
    struct tag_station* links[ total_links ];   // пути на соседние станции
    short  count_links;                         // количество соседей 
    char   fl_reserved;
} STATION;

void set_station_links( STATION*, int, ... );

int main( void ) {

    STATION st[10] = {
        { "St #1" , .count_links = 0, .fl_reserved = 0 },
        { "St #2" , .count_links = 0, .fl_reserved = 0 },
        { "St #3" , .count_links = 0, .fl_reserved = 0 },
        { "St #4" , .count_links = 0, .fl_reserved = 0 },
        { "St #5" , .count_links = 0, .fl_reserved = 0 },
        { "St #6" , .count_links = 0, .fl_reserved = 0 },
        { "St #7" , .count_links = 0, .fl_reserved = 0 },
        { "St #8" , .count_links = 0, .fl_reserved = 0 },
        { "St #9" , .count_links = 0, .fl_reserved = 0 },
        { "St #10", .count_links = 0, .fl_reserved = 0 },
    };

    set_station_links(st, 2, st + 1, st + 2);
    set_station_links(st+1, 3, st, st + 3, st+4);
    set_station_links(st+2, 2, st, st + 5);
    set_station_links(st+3, 2, st+1, st + 5);
    set_station_links(st+4, 2, st+1, st + 7);
    set_station_links(st+5, 4, st+2, st + 3, st+6, st+8);
    set_station_links(st+6, 2, st+5, st + 8);
    set_station_links(st+7, 2, st+4, st + 8);
    set_station_links(st+8, 4, st+5, st + 6, st+7, st+9);
    set_station_links(st+9, 1, st+8);

    return 0;
}

void set_station_links( STATION* st, int count_links, ... ) {
    va_list arg; // список аргументов
    va_start( arg, count_links ); // начало списка аргументов

    st->count_links = count_links;

    for( int i = 0; i < count_links; ++i ) 
        st->links[i] = va_arg( arg, STATION* ); // заполняем связи станции в массив ссылок links
    
    va_end( arg );

}