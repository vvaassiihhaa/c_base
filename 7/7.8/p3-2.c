#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

enum {name_length = 50, total_links = 50, max_path_station = 100};

typedef struct tag_station {
    char name[name_length];                 // название станции метро
    struct tag_station* links[total_links]; // связи станции метро с другими соседними станциями
    short count_links;                      // общее количество связей
    char fl_reserved;                       // зарезервированная переменная
} STATION;

void set_station_links(STATION* st, int count_links, ...) {
    va_list args;
    va_start(args, count_links);

    st->count_links = count_links;
    for (int i = 0; i < count_links; ++i) {
        st->links[i] = va_arg(args, STATION*);
    }

    va_end(args);
}

int main() {
    STATION st[10] = {
        {"St #1", .count_links=0, .fl_reserved=0},
        {"St #2", .count_links=0, .fl_reserved=0},
        {"St #3", .count_links=0, .fl_reserved=0},
        {"St #4", .count_links=0, .fl_reserved=0},
        {"St #5", .count_links=0, .fl_reserved=0},
        {"St #6", .count_links=0, .fl_reserved=0},
        {"St #7", .count_links=0, .fl_reserved=0},
        {"St #8", .count_links=0, .fl_reserved=0},
        {"St #9", .count_links=0, .fl_reserved=0},
        {"St #10", .count_links=0, .fl_reserved=0},
    };
    
    // Инициализация названий станций
    // for (int i = 0; i < 10; ++i) {
    //     snprintf(st[i].name, name_length, "Station %d", i + 1);
    //     st[i].count_links = 0;
    //     st[i].fl_reserved = 0;
    // }
    
    // Установка связей между станциями согласно рисунку
    set_station_links(&st[0], 2, &st[1], &st[2]);    // Station 1 -> Station 2, Station 3
    set_station_links(&st[1], 4, &st[0], &st[2], &st[3], &st[5]);  // Station 2 -> Station 1, Station 3, Station 4, Station 6
    set_station_links(&st[2], 2, &st[0], &st[1]);    // Station 3 -> Station 1, Station 2
    set_station_links(&st[3], 2, &st[1], &st[4]);    // Station 4 -> Station 2, Station 5
    set_station_links(&st[4], 2, &st[3], &st[5]);    // Station 5 -> Station 4, Station 6
    set_station_links(&st[5], 5, &st[1], &st[4], &st[6], &st[7], &st[8]);  // Station 6 -> Station 2, Station 5, Station 7, Station 9, Station 8
    set_station_links(&st[6], 1, &st[5]);    // Station 7 -> Station 6
    set_station_links(&st[7], 2, &st[5], &st[8]);    // Station 8 -> Station 6, Station 9
    set_station_links(&st[8], 3, &st[5], &st[7], &st[9]);    // Station 9 -> Station 6, Station 8, Station 10
    set_station_links(&st[9], 1, &st[8]);    // Station 10 -> Station 9

    return 0;
}
