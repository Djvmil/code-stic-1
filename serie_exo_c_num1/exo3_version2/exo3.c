#include<stdio.h>
#include<math.h>
main(){
    int choix;
    float R1,R2,R3,Reqserie,Reqpar;
    printf("Cet programme consiste a calculer la resistance equivalente de 3 resistance (R1, R2 et R3) en serie et en parallele \n");
    printf("Veuillez entrer les valeurs de R1, R2 et R3\n");
    scanf("%f%f%f",&R1,&R2,&R3);
    Reqserie=R1+R2+R3;
    Reqpar=(R1*R2*R3)/((R1*R2)+(R2*R3)+(R1*R3));
    /*printf("la resistance equivalente en serie est egale a:\n %.2f\n",Reqserie);
    printf("la resistance equivalente en parallele est egale a:\n %.2f\n",Reqpar);*/

    printf("Maintenant pour calculer la frequence en serie appui sur 1 ou 2 pour la frequence en parallele\n");
    scanf("%d",&choix);
    switch(choix){
        case 1 : printf("frequence en serie %f",Reqserie); break;
        case 2 : printf("frequence en parallele est %f",Reqpar); break;
        default : printf("veuiller choisir 1 pour calculer la frequence en serie ou 2 pour calculer frequence en parallele \n");


                    }



        }
