#include<stdio.h>
typedef struct{
    char nom[15],prenom[30];
    char numero[10];
    }contact;
    int main(){
        contact tab[100];
        int i,cel;
            printf("saisir le nbre de cel a utiliser: ");
            scanf("%d",&cel);

            for(i=0;i<cel;i++){
                printf("saisir le nom: ");
                fflush(stdin);gets(tab[i].nom);
                printf("saisir le prenom: ");
                gets(tab[i].prenom);
                printf("saisir le numero:  ");
                gets(tab[i].numero);

                }
                for(i=0;i<cel;i++){
                    printf("le nom est %s\n",tab[i].nom);
                    printf("le prenom est %s\n",tab[i].prenom);
                    printf("le numero est %s\n",tab[i].numero);
                }
    }
