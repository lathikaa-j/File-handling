#include <stdio.h>
int main() 
{
    FILE *fp = NULL;
    char buffer[255+2];
    fp = fopen("new.txt", "r");
    if (fp == NULL) 
        printf("Failed to open file\n");
    else
         printf("File opened successfully\n");
    while(fgets(buffer, 255, fp)!= NULL)
        printf("%s", buffer);
    fclose(fp);
}
