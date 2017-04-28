#include<stdio.h>
#include<math.h>
#define pi 4*atan(1)
main(){
float r,p,s;
    printf("veuillez saisir la valeur du rayon du cercle :\n");
        scanf("%f",&r);

        s=pi*r*r;
    printf("la valeur de la surface est %.2f\n",s);

        p=2*pi*r;
    printf("la valeur du perimetre est %.2f \n",p);


}
