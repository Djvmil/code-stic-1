#include"mes_fonctions.h"
#define n 6
#define m 7

int main(){
int i,j,k,l,o,r,echange;
int T1[n],T2[m],T3[n+m],T4[n+m],T5[n+m];
//Saisi du tableau 1
printf("saisit du 1er tableau de 6 entier :\n");
    for(i=0;i<6;i++)
    {
        printf("T[%d]:",i);
        scanf("%d",&T1[i]);
    }
//Saisi du tableau 2
printf("\n\nsaisit du 2e tableau de 7 entier :\n");
    for(i=0;i<7;i++)
    {
        printf("T[%d]:",i);
        scanf("%d",&T2[i]);
    }

k=0;
    for(i=0;i<n;i++)
    {
        T3[k]=T1[i];
        k++;
    }

    for(i=0;i<m;i++)
    {
        T3[k]=T2[i];
        k++;
    }
//Affichage du tableau fusionnei
printf("\n\nAffichage du 3e tableau :\n\n");
    afficheTAB(T3,n+m);
//suppression des dublons
printf("\n\nAffichage du 4e tableau :\n\n");

r=0;

    for(i=0;i<13;i++)
    {
      for(j=0;j<=i;j++)
        {
            if(T4[j]!=T3[i])
            {
                T4[j]=T3[i];
                r++;
            }
        }
    }

    afficheTAB(T4,r);


printf("\n\n");
system("pause");
return 0;
}
