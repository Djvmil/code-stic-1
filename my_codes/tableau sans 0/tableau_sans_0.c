#include<stdio.h>

int main()
{
//Declaration des variables
int T[100],i,n,j=0,k;
//nbre de cellule
    do{
        printf("Saisir n:");    scanf("%d",&n);
      } while(n<=0 || n>100);
//saisi du tableau
printf("\nSaisi du tableau:\n");
    for(i=0;i<n;i++)
        {
            printf("T[%d]:",i);  scanf("%d",&T[i]);
        }
//affichage du tableau
printf("\nAffichage du tableau:\n");
    for(i=0;i<n;i++)
        {
            printf("T[%d]:%d\t",i,T[i]);
        }
//elimination des zeros dans le tableau
    for(i=0;i<n;i++)
        {
           if(T[i]!=0)
            {
                T[j]=T[i];
                j++;
            }
        }
//tableau sans zero
k=j;
printf("\nAffichage du tableau sans 0:\n");
    for(j=0;j<k;j++)
        {
            printf("T[%d]:%d\t",j,T[j]);
        }



printf("\n");
system("pause");
return 0;
}
