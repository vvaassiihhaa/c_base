// Николаев Богдан
// позавчера
// долго думал, как за один цикл сделать, а потом придумал

// Верное решение #1194213427
// C
#include <stdio.h>

#define TOTAL     20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while(count < sz_ar && scanf("%hd", &pows[count]) == 1)
        count++;

    // здесь продолжайте программу
    // int flag = 0;
    for(int i = 0, j = 1; i < count; i++, j++){
        int left = pows[i];
        int right = pows[j];
        if (left % 3 == 0 && right % 3 != 0){
            int tmp = pows[i];
            pows[i] = pows[j];
            pows[j] = tmp;
        }
        if (left % 3 == 0 && right % 3 == 0){
            i--;
            count--;
        }
    }
    for(int i = 0; i < count; i++) printf("%d ", pows[i]);
    return 0;
}