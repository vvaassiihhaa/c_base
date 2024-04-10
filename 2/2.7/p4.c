#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10; // часы
    unsigned short time_m = 33; // минуты
    unsigned short time_s = 5; // секунды

    unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
    scanf("%hu; %hu; %hu", &h, &m, &s);

    // сначала всё переводим в секунды
    unsigned int time = ( time_h + h ) * 3600 + ( time_m + m ) * 60 + time_s + s;

    unsigned int sec  = time % 60;
    unsigned int min  = ( time / 60 ) % 60;
    unsigned int hour = time / 3600; 

    printf( "%02d:%02d:%02d\n", hour, min, sec );       

    return 0;
}