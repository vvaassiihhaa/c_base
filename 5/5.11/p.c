#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void) 
{
         double width = 2.4, height = 0.76, depth = 3.14;
         char name[] = "Chair";
         const size_t size = strlen(name) + 100;
         char* info = (char *)malloc(size);
         
         sprintf(info, "(%.30s: %.2f x %.2f x %.2f)", name, width, height, depth);
         puts(info);
 
         free(info);
 
         return 0;
}