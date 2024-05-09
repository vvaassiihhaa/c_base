#include <stdio.h>
#include <string.h>
#include <iso646.h>

int lat_del(const char c)
{
    char s[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    if(strchr(s, c) != NULL) return 0;
    return 1;
}

void copy_string(char* dst, size_t max_len_dst, const char* src, int (*copy_permision)(const char))
{
    // здесь продолжайте функцию
    size_t top = max_len_dst-1;
    for(int i=0; i<top and i<strlen(src); i++)
        if(copy_permision(src[i]) == 1) dst[strlen(dst)] = src[i];
        else top++;
    dst[strlen(dst)] = '\0';
}

int main(void)
{
    char str[100] = {0}, str2[20] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте программу
    copy_string(str2, sizeof(str2)/sizeof(*str2), str, lat_del);
    puts(str2);

    return 0;
}

// HelloСергею Балакиреву и всем остальным ученикам!
// Hello012345 6789012345 6 7890 123456789 01234567!