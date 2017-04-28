#include<stdio.h>
#include<math.h>
int main(){
    int i,nombredep,somme=0;
        do{printf("veuilllez saiair un nombre de depart :\n"); scanf("%d",&nombredep);}while(nombredep<0);
        for(i=1;i<=nombredep;i++){somme=somme+i;}
        printf("la somme des entiers jusqu'a %d est egale a %d :\n",nombredep,somme);

getch();
return 0;
}







 /*do{
                somme=somme+i;
                i++;
        }   while(i<=nombredep);

    printf("la somme des entiers jusqu'a %d est egale a %d :\n",nombredep,somme);*/
