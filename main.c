#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "DRAW.h"
#include "sound.h"
#include <conio.h>
#include "filesystem.h"
#include "colour.h"

int main() {
    char filename[50];
    char firstenter;
    int colournumber;
    char choice;
    char c;
    char d;
    char e;
    char readfile[100];
    hideCursor();
    do {
        welcome(9);
    } while ((firstenter = getchar()) != '\n');

    system("cls");
    menudraw(6);
system:
    while ((choice = _getch()) != '5') {
        loop:
        system("cls");
        switch (choice) {
            case '1':
                firstchoice(6);
                if ((choice = _getch()) == '\r') {  // '\r' represents the Enter key
                    system("cls");
                    newline(5);
                    newline(1);
                    
                    colorloop:
                    printf("ENTER WRITING COLOR");
                    newline(2);
                    red();    
                    printf("TYPE 1 FOR RED");
                    newline(2);
                    blue();
                    printf("TYPE 2 FOR BLUE");
                    newline(2);
                    white();
                    printf("        TYPE 3 FOR WHITE");
                    newline(2);
                    black();
                    printf("TYPE 4 FOR BLACK");
                    newline(2);
                    green();
                    printf("TYPE 5 FOR GREEN");
                    scanf("%d", &colournumber);
                    switch (colournumber) {
                        case 1:
                            red();
                            break;
                        case 2:
                            blue();
                            break;
                        case 3:
                            white();
                            break;
                        case 4:
                            black();
                            break;
                        case 5:
                            green();
                            break;
                        default:
                            newline(1);
                            printf("The color is not right. Please enter the correct color again.");
                            Sleep(2000);
                            system("cls");
                            goto colorloop;
                    }

                    system("cls");
                    printf("ENTER FILE NAME =>  ");
                    scanf(" %s", filename);
                    printf("\n");
                    printf("ENTER TITLE: ");
                    filewrite(filename);
                } else {
                    goto loop;
                    
                } 
                break;
               
            case '2':
                
                secondchoice(6);
                if ((c = _getch()) == '\r')
                { system("cls");
                    printf("ENTER THE FILE NAME YOU WANT TO OPEN ==>");
                    scanf("%s",&readfile);
                    fileread(readfile);
                    goto end;
                    
                }
                else if(c!='\r')
                {   choice=c;
                    goto loop;
                }
                
                
            case '3':
                thirdchoice(6);
                if((d=_getch())=='\r')
                {
                    system("cls");
                    printf("ENTER THE FILE NAME YOU WANT TO EDIT");
                    scanf("%s",&readfile);
                    append(readfile);
                    goto end;
                }
                else if(d!='\r')
                {
                    choice =d;
                    goto loop;
                }
                
                
            case '4':
             fourthchoice(6);
              if((e=_getch())=='\r') 
                { 
                    printf("enter the file name---->  ]");
                    scanf("%s",&readfile);
                remove(readfile);
                goto end;
                }
            else if(e!='\r')
            {   
                choice =d;
                goto loop;
            }
                
            case '5':
                fifthchoice(6);
                break;
        }
    }
    
    showCursor();  // It is just for hiding cursor in terminal so animation can be seen like real
    end:
    return 0;
}
