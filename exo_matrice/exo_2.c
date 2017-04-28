#include<stdio.h>

int main()
{
int i,j,coef[]={2,4,3,1};
float Rel[5][6],s,m;

    for(i=0;i<4;i++)
    {
         s=0;m=0;
        for(j=0;j<5;j++)
        {
            if(j!=4)
            {
                printf("Note Etudiant %d:",j);
                scanf("%f",&Rel[i][j]);
                s+=Rel[i][j]*coef[j];
            }
            else
            {
               Rel[i][j]=s/10;
            }
        }

    }
j=0;
    printf("\nAffichage du tableau.\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
          printf("%.2f ",Rel[i][j]);
        }
    printf("\n");
    }

}
