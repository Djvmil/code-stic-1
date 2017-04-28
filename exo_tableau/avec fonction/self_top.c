#include<stdio.h>
#include<conio.h>
 int saisirTab(int T[],int taille){
     int i;
     for(i=0;i<taille;i++){
        printf("saisir la valeur a la case %d:",i);
        scanf("%d",&T[i]);
     }
     return 0;
 }
 //-----------------------------------------------------
 void affichageTab(int T[],int n){
 int i;
 for(i=0;i<n;i++){
    printf("\t T[%d]=%d",i,T[i]);
 }
printf("\n\n");
 }
 //----------------------------------------------
 int pairsimpTab(int T[],int n){
 int i;
 for(i=0;i<n;i++){
    if(T[i]%2==0){
        return 0;
    }
 }
 return 1;
 }
 //-------------------------------------------
 int premier(int n){
 int i;

    if(n==1||n==2){
        return 0;
    }

 for(i=2;i<=n/2;i++){
    if(n%i==0)
        return 1;
        break;
 }
 return 0;
 }
int main(){
int T1[8],T2[7],T3[15],i,j,k,n;

    printf("saisi du tableau1:\n");
    saisirTab(T1,8);

    printf("Affichage du tableau1:\n");
affichageTab(T1,8);

         printf("saisi du tableau2:\n");
         saisirTab(T2,7);

printf("Affichage du tableau2:\n");
affichageTab(T2,7);
i=0;
for(i=0;)




}
