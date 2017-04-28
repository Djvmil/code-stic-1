int saisirTAB(int T[], int a){
int i;
for(i=0;i<a;i++){
         printf("entrer la valeur de la case %d: ",i+1);
scanf("%d",&T[i]);
}
return 0;
}
//----------------------------------------------------------
int diokhTAB(int T[], int a){
int i;
for(i=0;i<a;i++){
         printf("T[%d] = %d\n ",i,T[i]);
}
return 0;
}
//----------------------------------------------------------
void afficheTAB(int T[],int taille ){
int i;
for(i=0;i<taille;i++)
printf("T[%d] = %d\n ",i,T[i]);
}
