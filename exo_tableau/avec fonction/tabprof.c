#include<stdio.h>
#include"mes_fonctions.h"
int main(){
    int TAB[100],position,n,nombre,i;
    do{puts("saisir le nombre d'elements"); scanf("%d",&n);}   while(n<0);
    // a revoir
    saisirTAB(TAB,n);
    afficheTAB(TAB,n);
    puts("saisir la valeur a rechercher."); scanf("%d",&nombre);
    position=DERTAB(TAB,n,nombre);
    if(position!=-1){
        printf("%d est a la position %d\n",nombre,position+1);
    }
    else{printf("%d ne figure pa dans le tableau\n",nombre);}

}
