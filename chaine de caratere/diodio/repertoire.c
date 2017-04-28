#include<stdio.h>

int mysterlen(char ch1[]){
int i;
    for(i=0;ch1[i];i++);
        return i;
}

int numerique(char ch[]){
int i=0;
while(ch[i]){
        if(ch[i]<48 || ch[i]>57)
        {
            return 0;
        }
        i++;
}
return 1;
}

typedef struct contact{

char nom[15];
char prenom[20];
char num[15]
}cont;
main(){
    cont contact[100];
    int nbcontact,i,valeur=9;
    do{
        printf("veuillez saisir le nombre de contact\n");
        scanf("%d",&nbcontact);
    }while(nbcontact<1 || nbcontact>100);

   for(i=0;i<nbcontact;i++){
    printf("saisir un nom %d:",i);
    fflush(stdin);
    gets(contact[i].nom);
    printf("saisir un prenom %d",i);
    gets(contact[i].prenom);

    do{
            if(numerique(contact[i].num)==0){printf("le numero nest pas numerique\n");}
            if(valeur!=9){printf("le numero est supp a 9 caractere\n");}

        printf("\nsaisir le numero %d",i);
        gets(contact[i].num);

        valeur=mysterlen(contact[i].num);

     }while(valeur!=9 || numerique(contact[i].num)==0);

   }

for(i=0;i<nbcontact;i++){
    printf("le nom du contact est: %s\n",contact[i].nom);
    printf("le prenom du contact est: %s\n",contact[i].prenom);
    printf("le numero du contact est: %s\n",contact[i].num);
    }
}
