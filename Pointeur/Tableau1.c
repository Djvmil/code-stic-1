#include<stdio.h>
int main()
{
int T[10],*p,i,j,echange;

    printf("Saisi du tableau\n");
    for(p=T,i=0;p<T+10;p++,i++)
    {
        printf("T[%d]:",i);
        scanf("%d",p);
    }

    printf("Affichage du tableau\n");
    for(p=T,i=0;p<T+10;p++,i++)
    {
        printf("Element %d: Adresse=%x, Valeur=%d\n",i,p,*p);
    }

    printf("\nTriage du Tableau\n");
  /*  for(p=T;p<T+10;p++)
    {
       for(i=0,p=T;p<T+10;p++,i++)
       {
           if(p>T[i])
           {
               echange=T[i];
               T[i]=p;
               p=echange;
           }
       }
    }*/

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*(T+i)<*(T+j))
            {
                echange=*(T+i);
                *(T+i)=*(T+j);
                *(T+j)=echange;
            }
        }
    }
     for(p=T,i=0;p<T+10;p++,i++)
    {
        printf("Element %d: Adresse=%x, Valeur=%d\n",i,p,*p);
    }

}
