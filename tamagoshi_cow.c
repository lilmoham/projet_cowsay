#include <string.h>
#include <stdio.h>
#include <unistd>
#include <stdlib.h>
#define LR 2
#define LS 1
#define BBL 0
void changement_etat(int sant,int* etat_suiv){
    switch (sant){
        case 0||10:
        *etat_suiv=0;
        break;
        case 1<=sant<=3||7<=sant<=9:
        *etat_suiv=1;
        break;
        default:
        *etat_suiv=2;
        break 
    }
}
void stock_update(int stk,int lf,int crp){stk=stk-lf+crp;}
void fitness_update(int ftns,int lf,int dig){ftns=ftns+lf+dig;}

int main(){
    int stock=5;
    int fitness=5;
    int ETAT=LR;
    int duree=0;
    int lunchfood=0;
    int crop;
    int digestion=0;
    while(ETAT !=0){
        printf("Survival:%d",duree);
        affiche_vache();
        sleep(2);
        printf("How much to feed: ")
        scanf(" %d",&lunchfood);
        crop=//fonction;
        stock_update(stock,lunchfood,crop);
        fitness_update(fitness,lunchfood,digestion); 

        
               
    }
}