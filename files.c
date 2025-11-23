#include <stdio.h>
int main() 
{
    FILE *fp = NULL;
    fp = fopen("new.txt", "r");
    if (fp == NULL) 
        printf("Failed to open file\n");
    else
         printf("File opened successfully\n");
    fclose(fp);
}
