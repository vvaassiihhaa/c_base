#include <stdio.h>
#include <string.h>

int match_ab(const char a, const char b)
{
    int aa = a, bb = b;
    if('0' <= a && a <= '9')
        aa -= 255;
    if('0' <= b && b <= '9')
        bb -= 255;

    return aa < bb;
}

void sort_string(char *str, size_t max_len, int (*match)(const char, const char))
{
    for(size_t i = 0; i < max_len; ++i) {
        size_t pos = i;
        char ch_min = str[pos];
        for(size_t j = i+1; str[j] != 0; ++j) {
            if(!match(ch_min, str[j])) {
                ch_min = str[j];
                pos = j;
            }
        }
        if(pos != i) {
            char t = str[i];
            str[i] = str[pos];
            str[pos] = t;
        }
    }
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    sort_string(str, strlen(str), match_ab);
    puts(str);

    return 0;
}