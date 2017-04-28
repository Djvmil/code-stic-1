#include<stdio.h>
#include<math.h>
int main(){
    int mtn,b20=20,b10=10,p2=2,p1=1;
        do {
                printf("Veuillez saisir le montant de l'argent en euros :\n"); scanf("%d",&mtn);
                if(mtn<0){printf("Le montant de l'argent ne doit pas etre inferieur a 0.\n\nRessayer!");}
                }   while(mtn<0);
            if(mtn>=20){
                if(mtn>20){printf("la decomposition nous donne: \n%d billet de 20 euros \n%d billet de 10 euros \n%d piece de 2 euros \n%d piece de 1 euros",mtn/20,(mtn%20)/b10,((mtn%20)%10)/2,((mtn%20)%10)%2); }
               else{printf("la decomposition nous donne un billet de %d euros",b20);}
                         }
        else if(mtn>=10 && mtn<20 ){
                if(mtn==10){printf("la decomposition nous donne un billet de %d euros",b10);}
                else{printf("la decomposition nous donne :\n%d billet de 10 euros \n%d piece de 2 euros \n%d piece de 1 euros",mtn/b10,(mtn%b10)/2,(mtn%b10)%2 );}
                                        }
        else if(mtn>=2 && mtn<10){
                if(mtn==2){printf("la decomposition nous donne une piece de %d euros",p2);}
                else{printf("la decomposition nous donne : \n%d piece de 2 euros \n%d piece de 1 euros",mtn/p2,mtn%p2);}
                                    }
        else {printf("la decomposition nous donne une piece de %d euro",p1);}

            }

