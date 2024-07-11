#include<stdio.h>
#include<stdlib.h>
void append(char filenames[])
{
     FILE *fptr3=fopen(filenames,"r");
    char buffers[500];
    while(fgets(buffers,500,fptr3)!=NULL)
    {
        printf("%s",buffers);
    }
    fclose(fptr3);
    
    FILE *fptr4=fopen(filenames,"a");
    char bufferS[500];
    printf("enter what you want");
       fflush(stdin);  
    fgets(bufferS,400,stdin);
    fputs(bufferS,fptr4);
}
int main()
{
char filename[100]="satyam.txt";
append(filename);

}