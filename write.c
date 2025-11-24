#include<stdio.h>
int main()
{
    FILE *fp;
    char write[100]= "The contents are replaced by this\n";
    fp= fopen("new.txt", "a");
    fputs(write,fp);
    fclose(fp);
}
