#include<stdio.h>
#include<conio.h>
#include"fonctions.h"
typedef struct{
char nom[10];
char prenom[11];
int numero;
char opmax[10];
char orange[5];
char tigo[4];
char expresso[8];
int maxop;
}contact;
int main(){
contact tab[10];
char name, opo[3]={'7','7'},opt[5]={'7','6'}, ope[3]={'7','O'},op[9];
int i,cpto=0,cpte=0,cptt=0;

int trouver=0;
for(i=0;i<10;i++){
tab[i].numero=i+1;
printf("entrer un nom:\n");
gets(tab[i].nom);
do{
    printf("entrer un numero de telephone:\n");
    scanf("%s",tab[i].numtel);
    if(!chainenumerique(tab[i].numtel)){
        printf("le numero de telephone doit etre numerique");
        continue;
    }

    if(comptercaractere(tab[i].numtal!=9)){
        printf("le numero de telephone doit compter neuf caractere");
        continue;
    }
       if(!startwith(tab[i].numtel,opo)&&!startwith(tab[i].numtel,opt)&&!startwith(tab[i].numtel,ope)){
        printf("le numero de l operateur saisi est invalide");
        continue;
       }
       break;
       }
       while(1);
}
       do{
        printf("entrer un operateur");
        gets(op);
       }while(op==opo&&ope&&opt);
       for(startwith(op,tab[i].numtel)){
        printf("%d,%s,%s\n",tab[i].nom,tab[i].num,tab[i].numtel);
        trouver++;
       }

}
if(trouver){
    printf(" l operateur n est pa de contact");
}
for(i=0;i<0;i++){
    if(startwith(opo,tab[i].numtel)){
        cpto++;
    }
    if(startwith(opt,tab[i].numtel)){
        cptt++;
    }
     if(startwith(ope,tab[i].numtel)){
        cpte++;
    }
}
copie(opmax,opo);
maxop=cpto;
if(maxop<cptt){
    maxop=cptt;
    copie(opmax,"tigo");
}
if(maxop<cpte){
    maxop=cpte;
    copie(opmax,"expresso");

}
printf("l operateur %s a %d contact",opmax,mawop);
getch();
return 0;

}
