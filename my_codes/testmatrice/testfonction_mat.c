#include<stdio.h>

#define m 3
#define n 3
int main()
{
int T[m][n],i,j,e,k,l;

printf("Saisi de la Matrice:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                printf("T[%d][%d]:",i,j);
                scanf("%d",&T[i][j]);
            }
    }

printf("Affichage de la Matrice:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                printf("%d ",T[i][j]);
            }
        printf("\n");
    }

printf("Matrice ranger\n");
    for(i=0;i>m;i++)
        {
            for(j=i;j<m;j++)
            {
                for(k=j;k<n;k++)
                {
                    for(l=k;k<n;k++)
                    {
                        if(T[i][j]>T[k][l])
                        {
                            e=T[i][j];
                            T[i][j]=T[k][l];
                            T[k][l]=e;
                        }
                    }
                }
            }
        }

        for(k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
            {
                printf("%d ",T[k][l]);
            }
        printf("\n");
    }
}
