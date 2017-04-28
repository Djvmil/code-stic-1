#include<stdio.h>
#include<math.h>

int main(){
    int somme=0,prixdh,i=1;
        do{
            printf("Veuillez saisir un prix d'article :\n"); scanf("%d",&prixdh);
                somme=somme+prixdh;
                i++;

        }   while(prixdh!=0);

        printf("la somme des prix d'article saisi est : %d\n\n",somme);
system("pause");
getch();
return 0;
}

