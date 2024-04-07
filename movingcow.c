#include "newcow.h"
#include "movingcow.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void update (){printf("\033[H\033[J");}
void gotoxy(x,y){printf("\033[%d;%dH",x,y);}
void afficher_moving(){
    int k=1;
    for(int i=0;i<3;i++){
        if(i==0){
            affiche_vache(0,"");
            sleep(3);
        }else{
            if(i==1){
                int x=50;
                while(x<97){
                sleep(1);
                update();
                gotoxy(1,x);
                printf("       ^_____^\n");
                gotoxy(2,x);
                printf("   0\\  ( 0 0 )  /O\n");
                gotoxy(3,x);
                printf("    \\\\ (_---_) //\n");
                gotoxy(4,x);
                printf("     \\\\__| |__//\n");
                gotoxy(5,x);
                printf("      |       |\n");
                gotoxy(6,x);
                printf("      |       |\n");
                gotoxy(7,x);
                printf("      |_______|\n");
                gotoxy(8,x);
                printf("     //       \\\\\n");
                gotoxy(9,x);
                printf("    //         \\\\\n");
                gotoxy(10,x);
                printf("   0/           \\0\n");
                x++;
                
                }


            }
            else if(i==2){
                sleep(3);
                update();
                fflush(stdout);
                gotoxy(1,100);
                printf("       ^_____^\n");
                gotoxy(2,100);
                printf("       ( 0 0 )\n");
                gotoxy(3,100);
                printf("    ___( --- )___\n");
                gotoxy(4,100);
                printf("   /             \\\n");
                gotoxy(5,100);
                printf("  //\\           /\\\\\n");
                gotoxy(6,100);
                printf("  \\\\ |         | //\n");
                gotoxy(7,100);
                printf("   \\\\|         |//\n");
                gotoxy(8,100);
                printf("     \\___| |___/\n");
                gotoxy(9,100);
                printf("      |   _   |\n");
                gotoxy(10,100);
                printf("      |__| |__|\n");

            }
            }
        }
        
    }
int main(){

    afficher_moving();
    return 0;
}

















//     ^_____^
// O\  ( 0 0 )  /o
//  \\ (_---_) //
//   \\__| |__//
//    |       |
//    |	      |
//    |_______|
//   //       \\
//  //         \\
// O/           \0




//      ^_____^
//      ( 0 0 )
//   ___( --- )___
//  /             \
// //\           /\\
// \\ |         | //
//  \\|         |//
//    \____||___/
//     |   _   |
//     |__| |__|


    //  _______________
    // /_______________\
    // | RIP           |
    // |    BYE        |
    // |       BYE     |
    // |          LIFE |
    // |    COWSAY     |
    // |               |
    // |_______________|
    //  \_____________/
















