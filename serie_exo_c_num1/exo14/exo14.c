#include<stdio.h>
#include<math.h>
int main(){
int annee;
    printf("Veuillez saisir une annee svp :\n"); scanf("%d",&annee);

        if(annee%4==0){
        printf("l'annee que vous avez saisi est bissextil");
                    }
        if(annee%4!=0){
        printf("l'annee que vous avez saisi n'est pas bissextil ");
                    }

getch();
return 0;
}
