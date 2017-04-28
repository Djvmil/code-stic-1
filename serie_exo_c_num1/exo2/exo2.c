#include<stdio.h>
#include<math.h>
main(){
    float r,s,p;
    const float pi=4*atan(1);
    printf("Cet programme consiste a calculer la surface et le perimetre d'un cercle a l'aide d'un rayon donnei \n");
    printf("Veuillez entrer le rayon du cercle en cm\n");
    scanf("%f",&r);
        p=pi*pow(r,2);
        s=2*pi*r;
    printf("La surface du cercle est egale a:\n %.3fcm\n",s);
    printf("Le perimetre du cercle est egale a:\n %.3fcm\n",p);

        }
