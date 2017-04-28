#include<stdio.h>
#define n 10
int main(){
     int T[n];
     int i;
     for(i=0;i<n;i++){
     do{
printf("entrer une valeur a la cellule %d:\n",i);
scanf("%d",&T[i]);
     }while(T[i]<0 || T[i]>20);
     }
}
