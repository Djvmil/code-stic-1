#include<stdio.h>
#include<math.h>
main(){
int A,B;
char operateur;

printf("veuillez saisir les valeurs entieres de A et B :\n");
scanf("%d%d",&A,&B);
fflush(stdin);printf("veuillez saisir un operateur (+,-,*,/,%):\n");
scanf("%c",&operateur);

switch(operateur){

case '+' : printf("la somme de A et B est %d",A+B); break;

case '-' : printf("la difference de A et B est %d",A-B); break;

case '/' :       if(B!=0){printf("la division de A et B  est %d",A/B);}
                 else{printf("Impossible de diviser par 0.");}; break;

case '*' : printf("le produit de A et B est %d",A*B); break;

case '%' :       if(B!=0){printf("le reste de la division de A et B est %d",A%B);}
                 else{printf("impossible.");} ;break;

default: printf("L'operateur est inconnu");

}



}
