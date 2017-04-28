#include<stdio.h>
#include<math.h>
int main(){
int jj,mois,annee,choix;
    do{
    printf("Veuillez saisir une date svp (jour mois annee ) :\n"); scanf("%d%d%d",&jj,&mois,&annee);
                    if(jj>0 && jj<32){
                                if(mois>0 && mois<13){
                                        if(mois==2 || mois==4 || mois==6 || mois==9 || mois==11){
                                                if(jj>30){printf("L'annee n'est pas valide");}
                                                if(mois==2){
                                                                        if(annee%400==0 || annee%4==0){
                                                                                if(jj>29){printf("L'annee n'est pas valide");}
                                                                                else{printf("l'annee que vous avez entrer est valide (%02d/%02d/%04d)",jj,mois,annee);}
                                                                                                                }
                                                                        else{
                                                                                if(jj>28){printf("L'annee n'est pas valide");}
                                                                             else{printf("l'annee que vous avez entrer est valide (%02d/%02d/%04d)",jj,mois,annee);}
                                                                                                        }
                                                                    }
                                                else{printf("l'annee que vous avez entrer est valide (%02d/%02d/%04d)",jj,mois,annee);}
                                                                                    }
                                        else{printf("l'annee que vous avez saisi est valide (%02d/%02d/%02d)",jj,mois,annee);}
                                                    }
                                else{printf("L'annee n'est pas valide");}
                                            }
                    else{printf("L'annee n'est pas valide");}
                   puts("pour continuer tapper 1 sinon un autre nombre"); scanf("%d",&choix);
        }   while(choix!=0);

getch();
return 0;
}









                                                  /*if(b==1){b=Janvier;}
                                                    if(b==2){b=Fevrier;}
                                                    if(b==3){b=Mars;}
                                                    if(b==4){b=Avril;}
                                                    if(b==5){b=Mai;}
                                                    if(b==6){b=Juin;}
                                                    if(b==7){b=Juillet;}
                                                    if(b==8){b=Aout;}
                                                    if(b==9){b=Septembre;}
                                                    if(b==10){b=Octobre;}
                                                    if(b==11){b=Novembre;}
                                                    if(b==12){b=Decembre;}*/
