#include<stdio.h>
#include<math.h>
main(){
     int n;
     float x;
     puts("veuillez entrer la valeur reel de x :");
        scanf("%f",&x);
     puts("veuillez entrer la valeur entiere de n :");
        scanf("%d",&n);
     printf("La valeur %.3f a la puissance %d est :\n %f",x,n,pow(x,n));

        }
