#include"mes_fonctions.h"

int main()
{
//Decleration des variables
int T[100],n,i,j=0,val,dval;
//demande de nbres de cellule
    do{
        printf("Saisir n:");    scanf("%d",&n);
      } while(n<=0 || n>100);
//saisit et affichage du tableau
printf("\nSaisi du tableau:\n");
    saisirTAB(T,n);
    afficheTAB(T,n);
//demande du valeur  changei et la valeur a mettre
printf("saisir la valeur de val:"); scanf("%d",&val);
printf("saisir la valeur de dval:"); scanf("%d",&dval);
//recherche et remplacement des val par dval
    for(i=0;i<n;i++)
    {
        if(T[i]==val)
        {
            T[i]=dval;
        }
    }
//Affichage du tableau apres changement
afficheTAB(T,i);


printf("\n\n");
system("pause");
return 0;
}
