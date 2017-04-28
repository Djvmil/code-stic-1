#include<stdio.h>
#include<math.h>
main(){
    float R1,R2,R3,Reqserie,Reqpar;
    printf("Cet programme consiste a calculer la resistance equivalente de 3 resistance (R1, R2 et R3) en serie et en parallele \n");
    printf("Veuillez entrer les valeurs de R1, R2 et R3\n");
    scanf("%f%f%f",&R1,&R2,&R3);
    Reqserie=R1+R2+R3;
    Reqpar=(R1*R2*R3)/((R1*R2)+(R2*R3)+(R1*R3));
    printf("la resistance equivalente en serie est egale a:\n %.2f\n",Reqserie);
    printf("la resistance equivalente en parallele est egale a:\n %.2f\n",Reqpar);

        }
