#include<stdio.h>
#include<math.h>

int main(){
    int N,i,valeur,debut,longseq;
        do{
    printf("saisir une valeur entiere compris entre 10 et 50 :\n"); scanf("%d",&N);
            }   while(N<10 || N>50);
        for(i=1,longseq=0;i<N;i++){
            do{printf("saisir une valeur compris entre 1 et 100\n"); scanf("%d",&valeur);}while(N<1 || N>100);
                    if(valeur!=i+1){debut=valeur;}
                    else{longseq=longseq+1;}
                            }
        printf("la plus longue sequence commence par %d et se compose de %d valeur.",debut,longseq);

getch();
return 0;
}
