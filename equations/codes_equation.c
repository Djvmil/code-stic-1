#include<stdio.h>
#include<math.h>
main(){
float a,b,x;
puts("entrer la valeur de a et b");
scanf("%f%f",&a,&b);
printf("l'equation est %.fx+%.f=0\n",a,b);
if(a!=0){
    printf("la solution est %f",-b/a);
}
else{
        if(b==0){
    printf("tout reel est solution");
                }
                else{
    printf("l'equation n'admet pas de solution");
    }
}
}
