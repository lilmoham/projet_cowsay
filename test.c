#include <stdio.h>
#include <string.h>
#include <unistd.h>
void update (){printf("\033[H\033[J");}
void gotoxy(x,y){printf("\033[%d;%dH",x,y);}
int main(){
update();
gotoxy(1,1);
printf("%d\n",15);
gotoxy(0,0);
printf("");
sleep(3);
update();
gotoxy(7,70);
printf("%d\n",18);
return 0;
}
