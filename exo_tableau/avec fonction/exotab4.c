#include"mes_fonctions.h"
#define n 6
#define m 7

int main(){
int i,j,k,l,o,b,p,pos,choix,q,echange;
int T1[n],T2[m],T3[n+m],T4[n+m],T5[n+m];
//Saisi du tableau 1
printf("saisit du 1er tableau de 6 entier :\n");
    saisirTAB(T1,n);
//Saisi du tableau 2
printf("\n\nsaisit du 2e tableau de 7 entier :\n");
    saisirTAB(T2,m);
//Affichage du tableau 1
printf("\n\nAffichage du 1er tableau :\n\n");
    afficheTAB(T1,n);
//Affichage du tableau 2
printf("\n\nAffichage du 2e tableau :\n\n");
    afficheTAB(T2,m);

//Fusion des deux tableaux
k=0;
    for(i=0;i<n;i++)
    {
        T3[k]=T1[i];
        k++;
    }

    for(j=0;j<m;j++)
    {
        T3[k]=T2[j];
        k++;
    }
//Affichage du tableau fusionnei
printf("\n\nAffichage du 3e tableau :\n\n");
    afficheTAB(T3,n+m);
//suppression des dublons
printf("\n\nAffichage du 4e tableau :\n\n");
l=0;
    for(i=0;i<n;i++)
    {
        if(existe(T4,T1[i],l)==0)
        {
            T4[l]=T1[i];
            l++;
        }
    }

    for(j=0;j<m;j++)
    {
        if(existe(T4,T2[j],l)==0)
        {
            T4[l]=T2[j];
            l++;
        }
    }
//Affichage du tableau sans doublons
    afficheTAB(T4,l);
printf("\n");
//changemant d'une valeur dans tableau
o=l;
    do{
        if(choix==1)
            {
                printf("\n\nSi vous voulez encore changer une valeur ");
            }
            //demande de choix
          printf("\ntappei 1 pour changer une valeur dans le tableau ou 2 pour continuer.\n\n"); scanf("%d",&choix);
            if(choix==1)
            {
                 //Demande du nuemero de case a changei
                do{
                printf("saisir le numero de case a changer :\n"); scanf("%d",&pos);
                    //message d'erreur
                    if(pos>l)
                    {
                        printf("verifier la position que vous avez entrer\n");
                    }
                  }while(pos<0 && pos>l);

             //Demande de la valeur
            for(l=0;l<o;l++)
            {
                if(pos==l)
                {
                    printf("\n\nsaisir la nouvelle valeur :\n"); scanf("%d",&T4[l]);
                }
            }
             //affichage du tableau apres changement
             afficheTAB(T4,l);
            }
    }while(choix==1 || choix!=2);

//inverse du tableau
printf("\n\ninverse du tableau 4 :\n");
l-=1;
            for(l;l>=0;l--)
            {
                printf("T4[%d]=%d\t",l,T4[l]);
            }

//Rangement du tableau
printf("\n\nRangement du tableau\n");
    for(l=0;l<o;l++)
    {
        for(q=l;q<o;q++)
        {
            if(T4[l]>T4[q])
            {
                echange=T4[l];
                 T4[l]=T4[q];
                T4[q]=echange;
            }
        }
    }
    //affichage du tableau apres rangement croissant
    afficheTAB(T4,l);


printf("\n\n");
system("pause");
return 0;
}




