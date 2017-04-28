#include<stdio.h>
#include<math.h>
int main(){
    /*l'exercice n'est pas fini*/
    float a,b,c,x,dlt,x1,x2;
    printf("saisir les valeur de a, b et c\n");
        scanf("%f%f%f",&a,&b,&c);
    dlt=pow(b,2)-(4*(a*c));
printf("delta est egale a %.f\n",dlt);
         if(dlt>0){
            x1=(-b-(sqrt(dlt)))/(2*a);
            x2=(-b+(sqrt(dlt)))/(2*a);
            printf("l'equation admet deux solutions x1=%.2f et x2=%.2f",x1,x2);
                    }
         else{
                if(dlt==0){
            printf("l'equation admet une seule solution x0=%.2f",-b/(2*a));
                        }
                else{
                printf("l'equation n'admet pas de solution dans R");
                }
             }

getch();
return 0;
}
