#include <stdio.h>

struct tag_time {
    unsigned char hours;
    unsigned char minutes;
    unsigned char seconds;
};

int main(void)
{
    struct tag_time tm1 = { 12, 45, 16 }; 
    struct tag_time tm2 = { 4, 23, 48 }; 
    struct tag_time tm_sum;         

    // scanf( "%hhu %hhu %hhu %hhu %hhu %hhu", &tm1.hours, &tm1.minutes, &tm1.seconds, &tm2.hours, &tm2.minutes, &tm2.seconds );
    
    long _t1 = tm1.hours * 3600 + tm1.minutes * 60 + tm1.seconds;
    long _t2 = tm2.hours * 3600 + tm2.minutes * 60 + tm2.seconds; 
    long _res = _t1 + _t2;
    tm_sum.seconds = _res % 60;    
    _res /= 60;
    tm_sum.minutes = _res % 60;
    _res /= 60;
    tm_sum.hours = _res;

    printf( "%02d:%02d:%02d", tm_sum.hours, tm_sum.minutes, tm_sum.seconds );

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}

// long seconds;    

// 
    // tm_sum.hours = seconds / 3600;
    // tm_sum.hours = tm1.hours + tm2.hours;
    // seconds %= 3600;
    // tm_sum.minutes = seconds / 60;
    // tm_sum.seconds = seconds % 60;


    // seconds = tm1.hours * 60 * 60 + tm1.minutes * 60 + tm1.seconds + tm1.hours * 60 * 60 + tm2.minutes * 60 + tm2.seconds; 
    // tm_sum.hours = seconds / 3600;
    // seconds %= 3600;
    // tm_sum.minutes = seconds / 60;
    // tm_sum.seconds = seconds % 60;



// "%02d:%02d:%02d"
// 12 45 16 4 23 48
// 17:09:04