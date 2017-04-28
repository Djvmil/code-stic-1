#include<stdio.h>
#include<math.h>
int main(){
int jj,m,a,maxjj,choix;
    do{
        printf("saisir le jour, le mois et l'annee"); scanf("%d%d%d",&jj,&m,&a);
        if(jj<=0 || jj>31 || m<=0 || m>12 || a<=0){
            printf("date invalide/n");
                                                    }
        else{
            switch(m){
                case 1 :
                case 3 :
                case 5 :
                case 7 :
                case 8 :
                case 10 :
                case 12 : maxjj=31;
                break;
                case 2: if(a%400==0 || a%4==0) maxjj=29;
                        else maxjj=28;
                default : maxjj=30;

            }
            if(jj>maxjj){printf("Date invalide");}
                else{printf("%02d/%02d/%04d est une date valide\n",jj,m,a);}
            }


        puts("pour continuer tapper 1 sinon un autre nombre"); scanf("%d",&choix);
        }while(choix==1);
    }
