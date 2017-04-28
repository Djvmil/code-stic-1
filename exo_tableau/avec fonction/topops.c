#include<stdio.h>
void saisirT(int T[],int nbrecase){
    int i;
    for(i=0;i<nbrecase;i++){
        printf("Saisir la valeur a la position %d",i);
            scanf("%d",&T[i]);
    }
}

void afficheT(int T[], int nbrecase){
     int i;
    for(i=0;i<nbrecase;i++){
        printf("T[%d]=%d",i,T[i]);
    }
}


int main(){
int T[8],T1[7],T2[15],i,j,l,k,n;
/*do{
printf("veuillez saisir le nombre de celule  du tableau\n");
    scanf("%d",&n);
        } while(n<=0 || n>8);*/

        printf("saisi du tableau:\n");
         saisirT(T,8);
       /* for(i=0;i<n;i++){
             printf("saisir la valeur a la position %d :",i);
                    scanf("%d",&T[i]);
        }*/

printf("affichage du tableau:\n");
afficheT(T,8);
/*for(i=0;i<n;i++){
    printf("T[%d]=%d\t",i,T[i]);
}
*/
        printf("\nsaisi du tableau2:\nn");
            saisirT(T1,7);


       /* for(j=0;j<n;j++){
            printf("saisir la valeur a la position %d:",j);
            scanf("%d",&T1[j]);
            }
*/
    printf("Affichage du tableau:\n");
    afficheT(T1,7);


   /* for(j=0;j<n;j++){
        printf("T1[%d]=%d\t",j,T1[j]);
    }*/


    l=0;
    printf("\nAffichage du tableau3:\n");
    for(i=0;i<n;i++){
            T2[l]=T[i];
            l++;
    }

   for(j=0;j<n;j++){
    T2[l]=T1[j];
    l++;
   }

   afficheT(T2,l);

}
