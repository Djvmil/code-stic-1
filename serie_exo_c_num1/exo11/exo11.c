#include<stdio.h>
#include<math.h>

int main(){
    int entier1,entier2;
    char choix;
      printf("Veuillez saisir les 2 valeurs entieres svp"); scanf("%d%d",&entier1,&entier2);
      printf("veuillez saisir un operateur(+,-,/ ou %)\n"); scanf("%c",&choix);

        switch(choix){
         case '+': printf("la somme de des deux valeurs est egale a %d",entier1+entier2); break;

         case '-': printf("la soustraction des deux valeurs est egale a %d",entier1-entier2); break;

         case '*': printf("le produit des deux valeurs est egale a %d",entier1*entier2); break;

         case '/': if (entier2!=0){printf("le quotient entier des deux valeurs est egale a %d",entier1/entier2);}
                    else{printf("le denomiteur doit etre different de 0");} ; break;

         case '%': if (entier2!=0){printf("Le reste du quotient reel des deux valeurs est egale a %d",entier1%entier2);}
                    else{printf("le denomiteur doit etre different de 0");} ; break;

         default : printf("l'operateur est inconnu");
        }


getch();
return 0;
}
