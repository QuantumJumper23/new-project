#include<stdio.h>
#include"newline.h"
void welcome(int skip)
{
    for(int i=0;i<skip;i++)
    {
        printf("\n");
    }
        printf("\033[0;31m"); //set color i took from google
    printf("                                    __      _____| | ___ ___  _ __ ___   ___\n"); 
    printf("                                    \\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\\n");
    printf("                                     \\ V  V /  __/ | (_| (_) | | | | | |  __/\n");
    printf("                                      \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|\n");
    printf("\n");    
    printf("\n");
        printf("\033[0;32m"); 
    printf("                                           PRESS ENTER TO CONTINUE.... ");
   
   
}
void hideCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 1; // The cursor size
    cursorInfo.bVisible = FALSE; 

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void showCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 1; // The cursor size
    cursorInfo.bVisible = TRUE; // Set the cursor visibility to true

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void menudraw(int skip)
{ 
   for(int i=0;i<skip;i++)
   {
    printf("\n");
   }
     printf("\033[35m");
   printf("                     __________________________________________________________________________________________________\n");
printf("                            USE 1,2,3,4 KEY TO NAVIGATE"                                                                      );
   printf("                                              \n");
   printf("                         \033[1;31mWHAT   YOU   WANT   TO   DO   WITH   DIARY  \033[0m                                          \n");//\033 to change color i yoinked from google
   printf("\n");
   printf("\033[36m");
   printf("                                        1-ADD ENTRY                                            \n");
  newline(2);
   printf("                                        2-VIEW ENTRY                                            \n");
   newline(2);
   printf("                                        3-EDIT ONLY                                            \n");
   newline(2);
   printf("                                        4-DELETE ENTRY                                            \n");
   newline(2);
   printf("                                        5-EXIT \n");
   
    printf("\033[35m");
   printf("                   ____________________________________________________________________________________________________\n");
   printf("                                            \n");
    
}
void firstchoice(int skip)
{
    for(int i=0;i<skip;i++)
   {
    printf("\n");
   }
     printf("\033[35m");
   printf("                     __________________________________________________________________________________________________\n");
   printf("                                              \n");
   printf("                          \033[1;31mWHAT   YOU   WANT   TO   DO   WITH   DIARY  \033[0m                                          \n");//\033 to change color i yoinked from google
   printf("\n");
   printf("\033[36m");
   printf("\033[33m"); 
   printf("                                    ->  1-ADD ENTRY                                            \n");
  newline(2);
  printf("\033[36m");
   printf("                                        2-VIEW ENTRY                                            \n");
   newline(2);
   printf("                                        3-EDIT ONLY                                            \n");
   newline(2);
   printf("                                        4-DELETE ENTRY                                            \n");
   newline(2);
   printf("                                        5-EXIT \n");
   
    printf("\033[35m");
   printf("                   ____________________________________________________________________________________________________\n");
   printf("                                            \n"); 
    
}
void secondchoice(int skip)
{
       for(int i=0;i<skip;i++)
   {
    printf("\n");
   }
     printf("\033[35m");
   printf("                     __________________________________________________________________________________________________\n");
   printf("                                              \n");
   printf("                          \033[1;31mWHAT   YOU   WANT   TO   DO   WITH   DIARY  \033[0m                                          \n");//\033 to change color i yoinked from google
   printf("\n");
  printf("\033[36m");
   printf("                                        1-ADD ENTRY                                            \n");
  newline(2);
   printf("\033[33m"); 
   printf("                                    ->  2-VIEW ENTRY                                            \n");
    printf("\033[36m");
   newline(2);
   printf("                                        3-EDIT ONLY                                            \n");
   newline(2);
   printf("                                        4-DELETE ENTRY                                            \n");
   newline(2);
   printf("                                        5-EXIT \n");
   
    printf("\033[35m");
   printf("                   ____________________________________________________________________________________________________\n");
   printf("                                            \n");
    
}
void thirdchoice(int skip)
{
    for(int i=0;i<skip;i++)
    {
        printf("\n");
    }
     printf("\033[35m");
   printf("                     __________________________________________________________________________________________________\n");
   printf("                                              \n");
   printf("                          \033[1;31mWHAT   YOU   WANT   TO   DO   WITH   DIARY  \033[0m                                          \n");//\033 to change color i yoinked from google
   printf("\n");
   printf("\033[36m");
   printf("                                        1-ADD ENTRY                                            \n");
  newline(2);
   printf("                                        2-VIEW ENTRY                                            \n");
   newline(2);
   printf("\033[33m");
   printf("                                    ->  3-EDIT ONLY                                            \n");
   newline(2);
   printf("\033[36m");
   printf("                                        4-DELETE ENTRY                                            \n");
   newline(2);
   printf("                                        5-EXIT \n");
   
    printf("\033[35m");
   printf("                   ____________________________________________________________________________________________________\n");
   printf("                                            \n");
}
void fourthchoice(int skip)
{
    for(int i=0;i<skip;i++)
    {
        printf("\n");
    }
        printf("\033[35m");
   printf("                     __________________________________________________________________________________________________\n");
   printf("                                              \n");

   printf("                          \033[1;31mWHAT   YOU   WANT   TO   DO   WITH   DIARY  \033[0m                                          \n");//\033 to change color i yoinked from google
   printf("\n");
   printf("\033[36m");
   printf("                                        1-ADD ENTRY                                            \n");
  newline(2);
   printf("                                        2-VIEW ENTRY                                            \n");
   newline(2);
   printf("                                        3-EDIT ONLY                                            \n");
   newline(2);
    printf("\033[33m");
   printf("                                    ->  4-DELETE ENTRY                                            \n");
   printf("\033[36m");
   newline(2);
   printf("                                        5-EXIT \n");
   
    printf("\033[35m");
   printf("                   ____________________________________________________________________________________________________\n");
   printf("                                            \n");                          
}
void fifthchoice(int skip)
{
  for(int i=0;i<skip;i++)
    {
        printf("\n");
    } 
         printf("\033[35m");
   printf("                     __________________________________________________________________________________________________\n");
   printf("                                              \n");
   printf("                          \033[1;31mWHAT   YOU   WANT   TO   DO   WITH   DIARY  \033[0m                                          \n");//\033 to change color i yoinked from google
   printf("\n");
   printf("\033[36m");
   printf("                                        1-ADD ENTRY                                            \n");
  newline(2);
   printf("                                        2-VIEW ENTRY                                            \n");
   newline(2);
   printf("                                        3-EDIT ONLY                                            \n");
   newline(2);
    
   printf("                                        4-DELETE ENTRY                                            \n");
  
  printf("\033[33m"); 
   newline(2);
   printf("                                        5-EXIT \n");
   
    printf("\033[35m");
   printf("                   ____________________________________________________________________________________________________\n");
   printf("                                            \n");           

}