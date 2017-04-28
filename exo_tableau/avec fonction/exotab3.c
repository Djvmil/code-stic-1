#include"mes_fonctions.h"

int main()
{
    int T[100],n,i,j,echange,k=1;
    printf("donner le nombre de case :");
    scanf("%d",&n);
    printf("saisi du tableau :\n");
    saisirTAB(T,n);
    afficheTAB(T,n);
    printf("\naffichage du tableau ranger:\n");

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-k;j++)
            {
                if(T[j]<T[j+1])
                {
                    echange=T[j];
                      T[j]=T[j+1];
                    T[j+1]=echange;
                }
            }
             k++;
        }

           afficheTAB(T,i);
}
