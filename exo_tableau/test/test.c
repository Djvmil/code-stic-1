#include<stdio.h>
int saisirTAB(int T[], int a){
int i;
for(i=0;i<a;i++){
         printf("entrer la valeur de la case %d: ",i);
         scanf("%d",&T[i]);
}
return 0;
}
int main(){
 int T[10];
 saisirTAB(T,5);

}

