#include<stdio.h>

int saisirTAB(int T[], int a)
{
    int i;
    for(i=0; i<a; i++)
    {
        printf("T[%d]:",i);
        scanf("%d",&T[i]);
    }
    return 0;
}
//----------------------------------------------------------
void afficheTAB (int T[],int taille )
{
    int i;
    for(i=0; i<taille; i++)
        printf("T[%d]=%d\t",i,T[i]);
}

int main()
{
int T1[6],T2[7],T3[13],T4[13],i,j,k,l;
//Saisi du tableau 1
    printf("saisi du 1er tableau de 6 entier :\n");
    saisirTAB(T1,6);
//Saisi du tableau 2
    printf("\n\nsaisi du 2e tableau de 7 entier :\n");
    saisirTAB(T2,7);
//Affichage du tableau 1
    printf("\n\nAffichage du 1er tableau :\n\n");
    afficheTAB(T1,6);
//Affichage du tableau 2
    printf("\n\nAffichage du 2e tableau :\n\n");
    afficheTAB(T2,7);

//Fusion des deux tableaux
k=0;
    for(i=0; i<6; i++)
    {
        T3[k]=T1[i];
        k++;
    }

    for(j=0; j<7; j++)
    {
        T3[k]=T2[j];
        k++;
    }
//Affichage du tableau fusionnei
    printf("\n\nAffichage du 3e tableau :\n\n");
    afficheTAB(T3,13);
//suppression des dublons
    printf("\n\nAffichage du 4e tableau :\n\n");
    l=0;
    for(i=0; i<13; i++)
    {
        for(j=0; j<i; j++)
        {
            if(T4[j]==T3[i])
                break;
        }
        if(j==i)
        {
            T4[l]=T3[i];
            l++;
        }
    }
   /* l=0;
    for(i=0; i<6; i++)
    {
        for(j=0; j<i; j++)
        {
            if(T4[j]==T1[i])
                break;
        }

        if(j==i)
        {
            T4[l]=T1[i];
            l++;
        }
    }

    for(i=0; i<7; i++)
    {
        for(j=0; j<7+i; j++)
        {
            if(T4[j]==T2[i])
                break;
        }

        if(j==7+i)
        {
            T4[l]=T2[i];
            l++;
        }
    }*/

//Affichage du tableau sans doublons
    afficheTAB(T4,l);

printf("\n\n");
system("pause");
return 0;
}





