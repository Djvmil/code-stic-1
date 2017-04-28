#include<stdio.h>n
int main(){
    int note[10];
    int i,max,min,somme=0,nbrnote1=0,nbrnote2=0;
    float moy;

        for(i=0;i<=9;i++){
            do{
                              printf("saisir la note %d:\n",i+1);  scanf("%d",&note[i]);
                    if(note[i]<0 || note[i]>20){printf("\nla note doit etre entre 0 et 20\n\nveuillez encore ");}
              } while(note[i]<0 || note[i]>20);

            if(i==0){
                 max=note[i];
                 min=note[i];
            }

            else{
            if(note[i]>max){max=note[i];}
            if(note[i]<min){min=note[i];}
                    }

            if(note[i]>=10){nbrnote1+=1;}
            if(note[i]<10){nbrnote2+=1;}

            somme+=note[i];
        }

        for(i=0;i<=9;i++){
         printf("T[%d]\t",note[i]);
        }
    printf("\nle premier note est %d\n",max);
    printf("le dernier note est %d\n",min);
    printf("la moyenne des notes est %.2f\n",(float)somme/10);
    printf("le nombre de note >=10 est %d. \nle nombre de note <10 est %d\n",nbrnote1,nbrnote2);

 system("pause");
return 0;
}

