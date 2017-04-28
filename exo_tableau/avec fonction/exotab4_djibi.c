#include<stdio.h>
#include<math.h>
#define e 10
int saisirTAB(int T[], int a){
int i;
for(i=0;i<a;i++){
         printf("entrer la valeur de la case %d:",i+1);
scanf("%d",&T[i]);
}
return 0;
}
//----------------------------------------------------------
void triple(int n){
int t;
    t=pow(n,3);
   printf("%d",t);
}
//----------------------------------------------------------

void afficheTAB (int T[],int taille ){
int i;
for(i=0;i<taille;i++)
printf("T[%d]=%d\t",i+1,T[i]);
}
//----------------------------------------------------------
int premier(int n){
int i=0;
    if(n==1 || n==2)
     return 0;
    for(i=2;i<n/2;i++){
        if(n%i==0)
            return 1;
    }
  return 0;
}
//----------------------------------------------------------
int parfait(int n){
int i,nbrdiv=0;
for(i=1;i<=n/2;i++){
      if(n%i==0){
        nbrdiv+=i;
      }
}
  if(nbrdiv==n)
     return 1;
  return 0;
}
//----------------------------------------------------------
int pairimp(int n){
      if(n%2==0)
     return 1;
  return 0;
}
//----------------------------------------------------------
void rangeTAB(int T[]){
    int i,j,l,echange;
    for (i=0;i<l;i++)
    {
        for (j=i+1;j<l;j++)
        {
            if (T[i] > T[j])
            {
                echange = T[i];
                T[i] = T[j];
                T[j] = echange;
            }
        }
    }
}

int main(){
 int T[e],i,T1[e],j=0,T2[e],k=0,T3[e],l=0,T4[e],m=0;

        printf("Saisi du Tableau T\n");
            for(i=0;i<e;i++){
                printf("Saisir la valeur a position %d :",i+1); scanf("%d",&T[i]);
            }

        printf("\n\nAffichage du Tableau T\n");
              for(i=0;i<e;i++){
                printf("T[%d]=%d\t",i+1,T[i]);
            }

         printf("\n\nInverse du Tableau T\n");
              for(i=e;i>0;i--){
                printf("T[%d]=%d\t",i,T[i-1]);
            }


        printf("\n\nAffichage du tableau T1 avec les nombres pairs \n");
                for(i=0;i<e;i++){
                    if(pairimp(T[i])==1){
                        T1[j]=T[i];
                        j++;
                    }
                }
            afficheTAB(T1,j);

                rangeTAB(T1);
         printf("\n\nTableau T1 ranger\n\n");
            afficheTAB(T1,j);

        printf("\n\nAffichage du tableau T2 avec les nombres impairs \n");
                  for(i=0;i<e;i++){
                    if(pairimp(T[i])==0){
                        T2[k]=T[i];
                        k++;
                    }
                }
                    afficheTAB(T2,k);


        printf("\n\nAffichage du tableau T3 avec les nombres premiers \n");
                for(i=0;i<e;i++){
                    if(premier(T[i])==0){
                        T3[l]=T[i];
                        l++;
                            }
                        }
                    afficheTAB(T3,l);


        printf("\n\nAffichage du tableau T4 avec les nombres parfaits \n");
                for(i=0;i<e;i++){
                    if(parfait(T[i])==1){
                        T4[m]=T[i];
                        m++;
                            }
                        }
                    afficheTAB(T4,m);


system("pause");
return 0;
}






