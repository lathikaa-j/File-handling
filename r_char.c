#include <stdio.h>
int main() 
{
    FILE *fp = NULL;
    int ch;
    fp = fopen("new.txt", "r");
    if (fp == NULL) 
        printf("Failed to open file\n");
    else
         printf("File opened successfully\n");
    while((ch= fgetc(fp))!=EOF)
        printf("%c", ch);
    fclose(fp);
}
