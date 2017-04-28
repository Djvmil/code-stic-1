#include<stdio.h>
int nombrepaire(int x){
    if(x%2==0){
        return 0;
    }
    return 1;
}
main(){
    int x;
    int appelle;
    printf("saisir la valeur de x\t");
    scanf("%d",&x);
    appelle=nombrepaire(x);
    if (appelle==0){
        printf("le nombre est paire");
    }
    else{
        printf("le nompre est impaire");
    }
}
