#include <stdio.h>
#include <string.h>
#include "newcow.h"
void makemot(int t,char try[]){
    strcpy(try,"");
    for(int i=0;i<t;i++){
        if (i%2==0){
        try[i]='\\';
        }else {
        try[i]='/';
        }
    }
}

void affiche_vache(int argc , char* argv[]){
    char ears[]="^__^";
    char eyes[]="oo";
    char tung[]="__";
    char tail[128]="\\/\\";
    int q=1;
    int k=0;
    int g;
   for (int i=1;i<argc-1;i++){
       if(strcmp(argv[i],"-e")==0||strcmp(argv[i],"--eyes")<=0){
        if((strlen(argv[i+1])==strlen(eyes))){
        strcpy(eyes,(argv[i+1]));}}
       else if(strcmp(argv[i],"-T")==0){if(strlen(argv[i+1])<=strlen(tung)){strcpy(tung,(argv[i+1]));}}
        else if(strcmp(argv[i],"--tail")==0){
            k=1;
            //limite de 7
            sscanf(argv[i+1],"%d",&g);
            makemot(g,tail);}
        else if(strcmp(argv[i],"--jutsu")==0){
            sscanf(argv[i+1],"%d",&q);
             printf("",q);
        }
   }
   char sp1[20]="            ";
   if (k==1){
    strcpy(sp1,"");
    for (int i=0;i<15-g;i++){
        strcat(sp1," ");
    }

   }
   for(int i=1;i<q;i++){
    printf("        \\   %s",ears);
    printf("                        ");
   }
    printf("        \\   %s\n",ears);
    for(int i=1;i<q;i++){
    printf("         \\  (%s)\\_______",eyes);
    printf("                ");
   }
    printf("         \\  (%s)\\_______\n",eyes);
    for(int i=1;i<q;i++){
    printf("            (%s)\\       )",tung);
    printf("%s",tail);
    printf("%s",sp1);
   }
    printf("            (%s)\\       )",tung);
    printf("%s\n",tail);
    for(int i=1;i<q;i++){
    printf("                ||----w |");
    printf("               ");
   }
    printf("                ||----w |\n");
    for(int i=1;i<q;i++){
    printf("                ||     ||");
    printf("               ");
   }
    printf("                ||     ||\n");

}