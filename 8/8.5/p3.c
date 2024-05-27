#include <stdio.h>
 
int main(void)
{
    double data[] = {0.1, 0.2, -0.3, 0.4, -0.5};

    FILE* fp = fopen("my_file.dat", "wb");
    if(fp == NULL) {
        perror("my_file.dat");
        return 1;
    }
 
    int res = fwrite(data, sizeof(double), sizeof(data) / sizeof(*data), fp);
    fclose(fp);
 
    return 0;
}