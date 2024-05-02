#include <stdio.h>
#include <string.h>

int main(){
 
    size_t length, max_length =  -9999, max_indx;
    char cities[6][50];

     for (int i = 0; i < 6; ++i)
     {
        scanf("%49s", cities[i]);
        //printf("%zu ", strlen(cities[i]));
        length = strlen(cities[i]);
        if(length > max_length) 
            {
               max_length = length;
               max_indx = i;
            }
     }
    
    printf("%s", cities[max_indx]);
 return 0;   
}