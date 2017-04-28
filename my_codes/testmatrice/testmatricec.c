#include<stdio.h>
#include<math.h>
#define n 3

int main(){
int T[n][n],i,j,T1[10],T2[10],k=0,l;

printf("remplissage de la matrice\n");
    for(i=0;i<n;i++){
          for(j=0;j<n;j++){
        printf("T[%d,%d]:",i,j); scanf("%d",&T[i][j]);
    }
    }

printf("\naffissage de la matrice\n");
      for(i=0;i<n;i++){
          for(j=0;j<n;j++){
        printf("%d  ",T[i][j]);
    }
    printf("\n");
    }

      for(j=0;j<n;j++){
            T1[k]=T[j][j];
            k++;
    }

l=k;
       for(k=0;k<l;k++){
        printf("%d ",T1[k]);
    }

return 0;
}
