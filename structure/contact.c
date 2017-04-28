#include"chaine.h"

typedef struct
{
    char nom[20];
    char prenom[30];
    char numero[20];
} cont;

int main()
{
    cont T[100];
    char id[3];
    int i,nbrcontact,choix,a;

    do
    {
        system("cls");
        menu();
a=0;
        do
        {
            printf("Saisir le nombre de contact:\n");
            fflush(stdin);scanf("%d",&nbrcontact);

            if(nbrcontact<1 || nbrcontact>100)
                printf("le nombre de contact doit etre entre 0 et 100.\nveuillez encore ");
        }
        while(nbrcontact<1 || nbrcontact>100);
printf("\n");
        for(i=0; i<nbrcontact; i++)
        {
            printf("Saisir le nom du contact %d:\n",i);
            fflush(stdin);
            gets(T[i].nom);
            printf("Saisir le prenom du contact %d:\n",i);
            gets(T[i].prenom);
            do
            {
                printf("Saisir le numero du contact %d:\n",i);
                gets(T[i].numero);
                printf("\n");
                copiChaine(T[i].numero,id,0,2);
                if(strlcmp("77",id)!=0 && strlcmp("76",id)!=0 && strlcmp("70",id)!=0)
                    printf("\nle numero doit commencer par 77 ou 76 ou 70!\n");

                if(my_strlen(T[i].numero)!=9)
                    printf("\nle numero doit contenir 9 chiffres!\n");

                if(isNumeriqueNiass(T[i].numero)!=0)
                    printf("\nle numero doit etre numerique!\n");

            } while(my_strlen(T[i].numero)!=9 || isNumeriqueNiass(T[i].numero)!=0 || strlcmp("77",id)!=0 && strlcmp("76",id)!=0 && strlcmp("70",id)!=0);
        }
        system("cls");
        menu();
printf("\n");
        for(i=0; i<nbrcontact; i++)
        {
            if(T[i].numero[0]=='7' && T[i].numero[1]=='7')
            {
                if(a==0)
                    printf("\t********LES ABONNEES D'ORANGE:  ********\n\n");

                printf("\t*%s %s\n",T[i].prenom,T[i].nom);
                printf("\t %s\n\t----------------------------------------\n",T[i].numero);
                a++;
            }
        }
printf("\n");
a=0;
        for(i=0; i<nbrcontact; i++)
        {
            if(T[i].numero[0]=='7' && T[i].numero[1]=='6')
            {
                if(a==0)
                    printf("\t********LES ABONNES DE TIGO:    ********\n\n");

                printf("\t*%s %s\n",T[i].prenom,T[i].nom);
                printf("\t %s\n\t----------------------------------------\n",T[i].numero);
                a++;
            }
        }
printf("\n");
a=0;
        for(i=0; i<nbrcontact; i++)
        {
            if(T[i].numero[0]=='7' && T[i].numero[1]=='0')
            {
                if(a==0)
                    printf("\t********LES ABONNEES D'EXPRESSO:********\n\n");

                printf("\t*%s %s\n",T[i].prenom,T[i].nom);
                printf("\t %s\n\t----------------------------------------\n",T[i].numero);
                a++;
            }
        }
        printf("\n\ttappei 1 pour saisir une nouvelle liste de contact \n\t\tOU une autre touche pour quitter.\n\t\t\tCHOIX: ");
        scanf("%d",&choix);
    }
    while(choix==1);

printf("\n\t\t\t\tAU REVOIR (-_-)");
printf("\n\n");
return 0;
}
