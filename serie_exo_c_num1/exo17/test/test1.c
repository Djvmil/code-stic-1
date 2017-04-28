#include<stdio.h>
#include<math.h>
int main(){
    int N,i=1,val=0,max=0,pos=0;
        puts("saisir le nbre de valeur a saisir");
            scanf("%d",&N);
        do{
            puts("saisir un nombre");
                scanf("%d",&val);
                    if(val>max){
                            max=val;
                            pos=i;
                    }
                    i++;
                }while(i<=N);

        printf("grand est %d",max);
        printf("position est %d",pos);

    return 0;
}
