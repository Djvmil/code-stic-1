#include<stdio.h>
#include<math.h>
int main(){
int a,s=0,i=1;
    printf("Verification d'un nombre parfait\n\n");
    do{
    puts("veuillez saisir une valeur entiere positive"); scanf("%d",&a);
        }   while(a<1);

     while(i<a){
                if(a%i==0){s=s+i;}
                i++;
                 }

    if(s==a){printf("Le nombre est parfait");}
    else{printf("le nombre n'est pas parfait");}


}
