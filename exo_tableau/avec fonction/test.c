#include<stdio.h>n
int main(){
    int i;
    int note[10];
    float moy;

        for(i=0;i<10;i++){
                              printf("saisir la note %d:\n",i+1);  scanf("%d",&note[i]);
                            }


        for(i=0;i<10;i++){
         printf("T[%d]\t",note[i]);
        }

        printf("\n\ninverse du tableau\n\n");
         for(i=10-1;i>=0;i--){
         printf("T[%d]\t",note[i]);
        }

2
 system("pause");
return 0;
}


int existe(int T[],int n,int nbr){
    int i;
        for(i=0;i<nbr;i++){
            if(T[i]==n){return 1;}
        }
        return 0




