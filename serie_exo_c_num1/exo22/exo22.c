#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j;
      do{
            printf("Saisir la valeur de n:\n"); scanf("%i",&n);
            if(n<1){printf("le nombre saisi est incorrect");}
            }   while(n<1);
        for(i=1;i<=n;i++){
             for(j=1;j<=i;j++){
                printf("%i ",j);

                                }
   printf("\n") ;
                            }


 system("pause");
return 0;
}

