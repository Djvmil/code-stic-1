#include<stdio.h>
#include<math.h>

main(){
float r,p,s;
const float pi=4*atan(1);
printf("veuillez saisir la valeur du rayon du cercle :\n");
scanf("%f",&r);

s=pi*r*r;
printf("la valeur de la surface est %f\n",s);

p=2*pi*r;
printf("la valeur du perimetre est %f \n",p);



}
