#include<stdio.h>
#include<math.h>
int carrexist(int T[],int i){
int un;
float deux;
      un=sqrt(T[i]);
      deux=sqrt(T[i]);
if(un==deux){
        return 1;
}
return 0;
}

int main(){
    int T[100],T2[100],i,j,n,k;

        do{
                printf("Veuillez saisir le nombre de cellule du tableau\n");  scanf("%d",&n);
                        if(n<=0 || n>100){printf("le nombre de cellule doit etre entre 0 et 100");}
        }   while(n<=0 || n>100);

            printf("Saisi du tableau\n");
                for(i=1;i<=n;i++){
                    printf("T[%d]",i); scanf("%d",&T[i]);
                }

            printf("\nAffichage du tableau 1\n");
                for(i=1;i<=n;i++){
                printf("T[%d]=%d\t",i,T[i]);
                    }

j=1;


            for(i=1;i<=n;i++){
                 if(carrexist(T,i)==1){

                    printf("%d\t",T[i]);
                    }
                }
/*
k=j;
        printf("\n\nAffichage du tableau 2\n");
        for(j=1;j<k;j++){
                printf("T[%d]=%d\t",j,T2[j]);
                    }*/


printf("\n\n");
system("pause");
return 0;
}

