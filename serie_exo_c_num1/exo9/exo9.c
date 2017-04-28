#include<stdio.h>
#include<math.h>
int main(){
    int heure1,heure2,mn1,mn2,choix,i,convert1,convert2,duree1,duree;

            do{
                puts("veuillez choisir 1 si le depart et l'arrivee du vol ont lieu dans le meme jour \nou 2 si sont de jour differrent mais le duree de vol est inferieur a 24h");
                scanf("%d",&choix);
                i++;
                }    while(choix!=1 && choix!=2 );

        if(choix==1){
                    do {
                        puts("veuillez donner l'heure de depart du vol"); scanf("%d",&heure1);
                        i++;
                        if(heure1<0 || heure1>23){printf("Re-essayer svp! L'heure de depart n'est pas correct\n\n");}
                            }   while(heure1<0 || heure1>23);
                    do {
                        puts("veuillez donner les minutes de depart du vol"); scanf("%d",&mn1);
                        i++;
                        if(mn1<0 || mn1>59){printf("Re-essayer svp! Les minutes de depart ne sont pas correct\n\n");}
                            }   while(mn1<0 || mn1>59);
                        convert1=(heure1*60)+mn1;

                    do {
                        puts("veuillez donner l'heure d'arrivee du vol"); scanf("%d",&heure2);
                        i++;
                        if(heure2<=heure1 || heure2>23){printf("Re-essayer svp! L'heure d'arrivee n'est pas correct\n\n");}
                            }   while(heure2<=heure1 || heure2>23);

                    do {
                        puts("veuillez donner les minutes d'arrivee du vol"); scanf("%d",&mn2);
                        i++;
                        if(mn2<0 || mn2>59){printf("Re-essayer svp! Les minutes d'arrivee ne sont pas correct\n\n");}
                            }   while(mn2<0 || mn2>59);
                        convert2=(heure2*60)+mn2;

                printf("L'heure de depart du vol est: %d:%d\n",heure1,mn1);
                printf("L'heure d'arrivee du vol est: %d:%d\n",heure2,mn2);
                duree=convert2-convert1;

                    printf("le vol a duree %dh:%dmn\n",duree/60,duree%60);
                        }


        else{
                do{
                    do {
                        puts("veuillez donner l'heure de depart du vol"); scanf("%d",&heure1);
                        i++;
                        if(heure1<0 || heure1>23){printf("Re-essayer svp! L'heure de depart n'est pas correct\n\n");}
                            }   while(heure1<0 || heure1>23);
                    do {
                        puts("veuillez donner les minutes de depart du vol"); scanf("%d",&mn1);
                        i++;
                        if(mn1<0 || mn1>59){printf("Re-essayer svp! Les minutes de depart ne sont pas correct\n\n");}
                            }   while(mn1<0 || mn1>59);
                    convert1=(heure1*60)+mn1;

                    do {
                        puts("veuillez donner l'heure d'arrivee du vol"); scanf("%d",&heure2);
                        i++;
                        if(heure2<0 || heure2>23){printf("Re-essayer svp! L'heure d'arrivee n'est pas correct\n\n");}
                            }   while(heure2<0 || heure2>23);

                    do {
                        puts("veuillez donner les minutes d'arrivee du vol"); scanf("%d",&mn2);
                        i++;
                        if(mn2<0 || mn2>59){printf("Re-essayer svp! Les minutes d'arrivee ne sont pas correct\n\n");}
                            }   while(mn2<0 || mn2>59);
                        convert2=(heure2*60)+mn2;

                        printf("\nL'heure de depart du vol est: %d:%d\n",heure1,mn1);
                        printf("L'heure d'arrivee du vol coorespond au jour suivant le jour du depart a: %d:%d\n",heure2,mn2);
                        printf("\n\n");

                        duree1=(1440-convert1)+convert2;
                        if(duree1>1440){printf("Veuillez re-saisir les heures svp! \nla duree du vol ne doit pas depasser 24h\n\n");}

                            } while(duree1>1440);

                        printf("le vol a duree %dh:%dmn\n",duree1/60,duree1%60);

        }

getch();
return 0;
}
