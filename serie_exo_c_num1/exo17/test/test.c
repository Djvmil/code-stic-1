#include<stdio.h>
#include<math.h>
int main(){
    int n,i,v,max=v,p;
        printf("Veuillez saisir le nombre de valeur entiere a saisir svp :\n"); scanf("%d",&n);
        i=0;
        do{
            printf("Veuillez saisir une valeur entiere svp :\n"); scanf("%d",&v);
            if(max<v){max=v;}

            i++;
        }while(i<n);
printf("le plus grand des nombres saisi est :\n %d\n",max);
printf("sa position est :\n %d",p);
}
