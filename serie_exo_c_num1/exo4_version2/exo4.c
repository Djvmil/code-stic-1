#include<stdio.h>
#include<math.h>
main(){
     int n,i=1;
     float x,s=1;
     puts("veuillez entrer la valeur reel de x :");
        scanf("%f",&x);
     puts("veuillez entrer la valeur entiere de n :");
        scanf("%d",&n);
    while(i<=n){
        i++;
        s=s*x;
                    }
        printf("La valeur %.2f a la puissance %d est egale a:\n %.2f",x,n,s);

        }
