#include <stdio.h>
#include<ctype.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>
FILE*fichier=NULL;
typedef struct client{
       char nom[100+1];
       char tel[10];
       char number[15];
       char email[40];
       char type[15];
}t_client;
typedef struct  nom_rech{
        char nom[50];
        char email[45];
        char tel[55];
        char number[15];
}s_nomrech;

// debut fonction ajouter//
void ecrire(FILE * fichier,t_client cl){
    int verif=0;
    int k=0,i=0;
    t_client tcli[100];
    while(fread(&cl,sizeof(t_client),1,fichier) == 1){
        tcli[k]=cl;
        k++;
    }

    fflush(stdin);
    printf("\n entrer le nom complet:");
    gets(cl.nom);
    while(cl.nom[i]){
           if((cl.nom[i]>=65) && (cl.nom[i]<=90)){
                cl.nom[i]=cl.nom[i]+32;
           }
           i++;
    }

    fflush(stdin);
    printf(" entrer l'email:");
    gets(cl.email);
    do{
    do{
    fflush(stdin);
    printf(" entrer le numero de telephone:");
    gets(cl.tel);
   if(strlen(cl.tel)!=9)
    printf(" numero de telephone incorect\n");
    }while(strlen(cl.tel)!=9);
    if((cl.tel[0]==55)&&((cl.tel[1]==55)||(cl.tel[1]==54)||(cl.tel[1]==48))||((cl.tel[0]==51)&&(cl.tel[1]==51))){
    verif=1;
    }
    }while(verif==0);
    sprintf(cl.number, "CL%05d",k+1);
    fwrite(&cl,sizeof(t_client),1,fichier);
    }//fin fonction ajouter//

 // debut recherche nom//
  void recherchnom(FILE * fichier, s_nomrech nm) {
   int trouve=0;
   t_client cl;
   while(fread(&cl,sizeof(t_client),1,fichier)==1){
                   if(strcmp(nm.nom,cl.nom)==0){
                                  strcpy(nm.nom,cl.nom);
                                  strcpy(nm.tel,cl.tel);
                                  strcpy(nm.email,cl.email);
                                  strcpy(nm.number,cl.number);
                                  trouve=1;
                           }
                           }
                           if(trouve==0){
                               printf("%s n'est pas dans le repertoire \n",nm.nom);
                           }
                   else{
                   if(trouve==1){

                            printf(" nom=%s\t email=%s\t tel=%s\t \n",nm.nom,nm.email,nm.tel);
                   }
                   }
   }// fin recherche nom//

   // debut recherche telephone //
   void recherchtel(FILE * fichier, s_nomrech nm) {
   int trouve=0;
   t_client cl;
   while(fread(&cl,sizeof(t_client),1,fichier)==1){
                   if(strcmp(nm.tel,cl.tel)==0){
                                  strcpy(nm.nom,cl.nom);
                                  strcpy(nm.tel,cl.tel);
                                  strcpy(nm.email,cl.email);
                                   trouve=1;
                           }
                           }
                           if(trouve==0){
                               printf("%s n'est pas dans le repertoire \n",nm.tel);
                           }
                   else{
                   if(trouve==1){

                            printf(" nom=%s\t email=%s\t tel=%s\t \n",nm.nom,nm.email,nm.tel);
                   }
                   }
   }// fin recherche tel//

   // debut recherche mail//

    void recherchmail(FILE * fichier, s_nomrech nm) {
   int trouve=0;
   t_client cl;
   while(fread(&cl,sizeof(t_client),1,fichier)==1){
                   if(strcmp(nm.email,cl.email)==0){
                                  strcpy(nm.nom,cl.nom);
                                  strcpy(nm.tel,cl.tel);
                                  strcpy(nm.email,cl.email);

                                     trouve=1;
                           }
                           }
                           if(trouve==0){
                               printf("%s n'est pas dans le repertoire \n",nm.email);
                           }
                   else{
                   if(trouve==1){

                            printf(" nom=%s\t email=%s\t tel=%s\t \n",nm.nom,nm.email,nm.tel);
                   }
                   }
   }// fin recherche mail//

   // debut affichage contact //
   void listecontact(FILE * fichier){

        t_client cl;
        while(fread(&cl,sizeof(t_client),1,fichier)==1){
                  if((cl.tel[0]==55)&&(cl.tel[1]==55)){
                  printf("\n numero contact=%s **nom= %s ** email=%s ** tel=%s ** type=orange \n",cl.number,cl.nom,cl.email,cl.tel);
         }
         if((cl.tel[0]==55)&&(cl.tel[1]==54)){
                  printf("\n numero contact=%s **nom= %s ** email=%s ** tel=%s ** type=tigo \n",cl.number,cl.nom,cl.email,cl.tel);
                  }
                  if((cl.tel[0]==55)&&(cl.tel[1]==48)){
                  printf("\n numero contact=%s **nom= %s ** email=%s ** tel=%s ** type=expresso \n",cl.number,cl.nom,cl.email,cl.tel);
                  }
                      if(cl.tel[0]==51){
                      printf("\n numero contact=%s nom= %s ** email=%s ** tel=%s ** type=fixe\n",cl.number,cl.nom,cl.email,cl.tel);
                       }
         }
        }// fin affichage contact//

   void modifier(FILE * fichier, t_client cl){
    t_client pers;
     int pos=0;
     while(fread(&pers,sizeof(t_client),1,fichier)==1){
     if(strcmp(cl.email,pers.email)==0){

        rewind(fichier);
         fseek(fichier,pos*sizeof(t_client),SEEK_SET);
         fwrite(&cl,sizeof(t_client),1,fichier);
         break;
         }
         pos++;
         }
     }
int main(){
        int c,b,k=0,i=0;
        t_client cl;
        s_nomrech nm;

   do{  printf("\t\t__________________________\n");
    printf("\t\t      MENU GENERAL\n");
    printf("\t\t__________________________\n");
    printf("\t\t 1: Ajouter un contact\n");
    printf("\t\t 2: Rechercher un contact\n");
    printf("\t\t 3: Modifier un contact\n");
    printf("\t\t 4: Liste des contacts\n");
    printf("\t\t 5: Quitter\n");
    printf("\t\t faites votre choix: ");
    scanf("%d",&c);
    switch (c)
  {
      case 1: printf(" \t\t 1: Ajouter un contact");
      break;
      case 2 : printf("\n\t\t 2: Rechercher un contact");
      break;
      case 3 : printf("\n\t\t 3: Modifier un contact ");
      break;
      case 4 : printf("\n\t\t 4: Liste des contacts");
      break;
      case 5: printf("\n\t\t 5: Quitter");
      break;

  }

    fichier=fopen("annuaire","a+");
     if ((fichier != NULL)&&(c==1)){
     ecrire(fichier,cl);
         rewind(fichier);
        system("cls");
        printf("\n");
        system("pause");
        fclose(fichier);
}
fichier=fopen("annuaire","r");
if((fichier != NULL)&&(c==2)){
    printf("\n 1:rechercher par telephone\n");
    printf("\n 2:rechercher par nom\n");
    printf("\n 3:rechercher par email\n");
    printf("entrer un nombre:");
    scanf("%d",&b);
    switch(b){
                    case 1:printf("\n\t 1:rechercher par telephone");
                    break;
                    case 2:printf("\t2:rechercher par nom");
                    break;
                    case 3:printf("\t3:rechercher par email");
                    break;

          }
if(b==2){

     fflush(stdin);
    printf("\n entrer le nom que vous rechercher:");
    gets(nm.nom);
    while(nm.nom[i]){
           if((nm.nom[i]>=65) && (nm.nom[i]<=90)){
                nm.nom[i]=nm.nom[i]+32;
           }
           i++;
    }
    system("cls");
    recherchnom(fichier,nm);
    printf("\n");
    system("pause");


}

if(b==1){
         fflush(stdin);
         printf("\n entrer le numero  que vous rechercher:");
         gets(nm.tel);
         system("cls");
         recherchtel(fichier,nm);
         printf("\n");
         system("pause");
}
if(b==3){
    fflush(stdin);
    printf("\n entrer l'email   que vous rechercher:");
    gets(nm.email);
    system("cls");
    recherchmail(fichier,nm);
    printf("\n");
    system("pause");
}
fclose(fichier);
}
if((fichier != NULL)&&(c==3)){
            fflush(stdin);
            printf(" \nentrer l'email que vous recherchez:");
            gets(cl.email);
            fflush(stdin);
            printf("entrer le nouveau numero de telephone:");
            gets(cl.tel);
            fflush(stdin);
            printf("entrer le nom:");
            gets(cl.nom);
            fflush(stdin);
           printf("entrer le numere de client:");
           gets(cl.number);
           system("cls");
            fichier=fopen("annuaire","r+");
            modifier(fichier,cl);
            rewind(fichier);
            listecontact(fichier);
            printf("\n");
           system("pause");
            fclose(fichier);
}








fichier=fopen("annuaire","r");
   if((fichier != NULL)&&(c==4)){
               system("cls");
               listecontact(fichier);
               printf("\n");
           system("pause");

               fclose(fichier);
   }




}while(c!=5);


getchar();
return 0;

}
