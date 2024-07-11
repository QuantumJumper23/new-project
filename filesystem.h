#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void filewrite(char filename[])
{
FILE *fptr=fopen(filename,"w");
char str[500];
scanf("%s",str);
fprintf(fptr,str);
fclose(fptr);
fclose(fptr);
}
void title(char title[])
{
    
    char str1[30];

}
void fileread(char filenames[])
{
    FILE *fptr2=fopen(filenames,"r");
    char buffer[500];
    while(fgets(buffer,500,fptr2)!=NULL)
    {
        printf("%s",buffer);
    }
    fclose(fptr2);
}
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
