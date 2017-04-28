#include<stdio.h>
#include<math.h>
int main(){
    int T[100],T2[100],i,j,n,k,un;
    float deux;
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
                    un=sqrt(T[i]);
                    deux=sqrt(T[i]);
            if(T[i]!=0){
                if(un==deux){
                    T2[j]=T[i];
                    j++;
                                }
                            }
                }
k=j;
        printf("\n\nAffichage des carrei\n");
        for(j=1;j<k;j++){
                printf("T[%d]=%d\t",j,T2[j]);
                    }


printf("\n\n");
system("pause");
return 0;
}
