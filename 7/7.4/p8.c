#include <stdio.h>
#include <stdlib.h>

#define TOTAL   10

void* expand_array(short* ptr, size_t* len, short fill);

int main(void)
{
   short * ptr_d = calloc(TOTAL,  sizeof(short));
   size_t len = TOTAL;
   if(ptr_d == NULL)
        return 0;

    int count = 0;
    while(count < TOTAL && scanf("%hd", &ptr_d[count]) == 1)
        count++;

    ptr_d = expand_array( ptr_d, &len, -1 );
    for ( int i = 0; i < len; ++i )
        printf("%hd ", ptr_d[i] );
    
    free(ptr_d);
}

void* expand_array( short* ptr, size_t* len, short fill ) {
    size_t new_len = *len * 2;
    short* new_ptr = realloc( ptr, new_len * sizeof(short) );
    if(new_ptr == NULL)
        return NULL;
    *len = new_len;
    for( size_t i = *len / 2; i < *len; ++i )
        new_ptr[i] = fill;
    return new_ptr;
}