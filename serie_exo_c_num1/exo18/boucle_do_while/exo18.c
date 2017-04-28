#include<stdio.h>
#include<math.h>

int main(){
    int Premier_valeur,deuxieme_valeur,i=0;
        printf("======================================================\n==================>Jeu de devinette<==================\n======================================================\n\nAssurez vous que le deuxieme joueur ne vois pas se que vous saisissez\n\n");
        printf("veuiller saisir un nombre entier a deviner\n"); scanf("%d",&Premier_valeur);
        system("cls");
           do{
            printf("Devinez un nombre entier\n"); scanf("%d",&deuxieme_valeur);
             if(Premier_valeur>deuxieme_valeur){printf("Reessayer svp! L'entier a diviner est plus grand \nque la valeur que vous avez saisi:\n\n");}
             if(Premier_valeur<deuxieme_valeur){printf("Reessayer svp! L'entier a diviner est plus petit \nque la valeur que vous avez saisi:\n\n");}
                i++;
           } while(Premier_valeur!=deuxieme_valeur);

        printf("BRAVO vous avez devinez l'entier, vous etes un genie\n");

getch();
return 0;
}

