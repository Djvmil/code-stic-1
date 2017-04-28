#include<stdio.h>
#define tauxtva 0.186
main(){
    float mht,mttc,mtva;
    printf("veuillez saisir le montant hort taxe\n");
    scanf("%f",&mht);
    mtva=mht*tauxtva;
    mttc=mht+mtva;
    printf("tva=%f, ttc=%f",mtva,mttc);


}
