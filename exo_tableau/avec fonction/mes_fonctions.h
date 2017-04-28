#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int saisirTAB(int T[], int a){
int i;
for(i=0;i<a;i++){
         printf("T[%d]:",i);
scanf("%d",&T[i]);
}
return 0;
}
//----------------------------------------------------------
void afficheTAB (int T[],int taille ){
int i;
for(i=0;i<taille;i++)
printf("T[%d]=%d\t",i,T[i]);
}
//----------------------------------------------------------
int PGCD(int a,int b){
while(a!=b){

   if(a<b) {
    b=b-a;
   }

   else
   a=a-b;
}
return a;
}
//----------------------------------------------------------
void rangeTAB(float T[]){
    int i,j,l,echange;
    for (i=0;i<l;i++)
    {
        for (j=i+1;j<l;j++)
        {
            if (T[i] > T[j])
            {
                echange = T[i];
                T[i] = T[j];
                T[j] = echange;
            }
        }
            printf("%f \n",T[i]);
    }

}
//----------------------------------------------------------
void maximumtableau(int T[],int max){
int i,n;
n=0;
for(i=0;i<10;i++){
    if(T[i]<max){
        T[i]=n;
    }
  printf("%d ",T[i]);
}
}
//----------------------------------------------------------
double moyenneTAB(int T[] ){
int s,i;
float moy;
for(i=0;i<10;i++){
s+=T[i];
}
moy=s/(float)10;
return moy;
}
//----------------------------------------------------------
void maxTAB(int T[],int n){
int maxi =T[0],i;

for(i=1;i<n;i++){
    if(maxi<T[i]){
        maxi=T[i];
    }
}
printf("%d",maxi);
}
//----------------------------------------------------------
int minTAB(int T[]){

int mini =T[0] ,i;

for(i=1;i<10;i++){
    if(mini>T[i]){
        mini=T[i];
    }
}
return mini;
}
//----------------------------------------------------------

int existe(int T[],int n, int taille){
int i;
for(i=0;i<taille;i++){
if(T[i]==n)
return 1;
}
return 0;
}

//----------------------------------------------------------

int carrexist(int T[], int nbrcase){
int i,un;
float deux;
for(i=1;i<=nbrcase;i++){
      un=sqrt(T[i]);
      deux=sqrt(T[i]);
if(un==deux){
        return 1;
}
}
return 0;
}

//----------------------------------------------------------
int premier(int n){
int i=2;
while(n%i!=0 && i<=(n/2)){
      i++;
}
  if(i>n/2)
     return 1;
  return 0;
}
//----------------------------------------------------------
int parfait(int n){
int i,cpt=0;
for(i=1;i<=n/2;i++){
      if(n%i==0){
        cpt=cpt+i;
      }
}
  if(cpt==n)
     return 1;
  return 0;
}
//----------------------------------------------------------
int pairimp(int n){
      if(n%2==0)
     return 1;
  return 0;
}
//----------------------------------------------------------
void tri_a_bulle(int t[],int n){
int j =0,tmp =0,en_desordre =1;
int FALSE,TRUE;
while(en_desordre){
        en_desordre = FALSE;
for(j =0; j < n-1; j++){
if(t[j] > t[j+1]){
    tmp = t[j+1];
t[j+1] = t[j];
t[j] = tmp;
en_desordre = TRUE;
      }
    }
  }
}
//----------------------------------------------------------
void tri_permutation(int t[],int n){
int i,s=0,k,nb[n], res [n];
for(i=0;i<n;i++){
for(k=0;k<n;k++){
if(t[i]>t[k])
    s++;
nb[i]=s;
}
res[s]=t[i];
s=0;
}
for( i=0;i<n;i++)
t[i]=res[i];
}
//----------------------------------------------------------
void tri_insertion(int t[],int n){
int i,p,j, x;
for(i =1; i < n; i++){
        x = t[i];
p = i-1;
while(t[p] > x && p-- >0)
    {
    }p++;
for(j = i-1; j >= p; j--) {
    t[j+1] = t[j];
    }
t[p] = x;
}
}
//----------------------------------------------------------
void fusion(int*t,int deb1,int fin1,int fin2){
int*table1;
int deb2=fin1+1;

int compt1=deb1;

int compt2=deb2;

int i;
table1=(int*)malloc((fin1-deb1+1)*sizeof(int));
for(i=deb1;i<=fin1;i++)
    table1[i-deb1]=t[i];
for(i=deb1;i<=fin2;i++){
if(compt1==deb2)
break;
else

if(compt2==(fin2+1)) {
        t[i]=table1[compt1-deb1];
compt1++;
}
else

if(table1[compt1-deb1]<t[compt2]){
        t[i]=table1[compt1-deb1];
compt1++;
}
else{
    t[i]=t[compt2];
    compt2++;
    }
    }
    free(table1);
    }

//----------------------------------------------------------
int longchaine(char *chaine){
int i,cpt=0;
for(i=0;chaine[i];i++){

    cpt+=1;

}
 return cpt;
}
//----------------------------------------------------------
int existecarac(char*chaine,char carac){

int i,cpt=0;
for(i=0;chaine[i];i++){
 if(chaine[i]==carac){
    cpt+=1;
 }
}

return cpt;
}
//----------------------------------------------------------
int nbmots(char*chaine){
    int i,cpt=0,s;
for(i=0;chaine[i];i++){
if(longchaine(chaine)==0){
    printf("vous n'avez pas saisi une phrase");
}
 else if(chaine[i]==' '){
    cpt+=1;
 }
}
s=cpt+1;

return s;
}
//----------------------------------------------------------
int nbremots(char*phrase){
int i,cpt=0;
if(phrase[0]!='\0'){
    i=1;
    if(phrase[0]!=' ')
        cpt++;
   for(i=1;phrase[i];i++){
        if((phrase[i]==' ')&&(phrase[i+1]!=' ') && (phrase[i+1]!='\0')){
            cpt++;
        }

    }
}
return cpt;
}
//----------------------------------------------------------
void majuscule(char*chaine){
int i;
for(i=0;chaine[i];i++){
    chaine[i]=toupper(chaine[i]);
}
}

//----------------------------------------------------------
void minuscule(char*chaine){
int i;
for(i=0;chaine[i];i++){
    chaine[i]=tolower(chaine[i]);
}
}
//----------------------------------------------------------
void saisirMAT(int **T, int ligne,int colone){
int i,j;
for(i=0;i<ligne;i++){
        T[i]=(int*)malloc(colone*sizeof(int));
         for(j=0;j<colone;j++){
            printf("entrer la valeur de la case [%d][%d]: ",i,j);
            scanf("%d",&T[i][j]);
         }
}
}
//----------------------------------------------------------
void afficheMAT(int **T, int ligne,int colone){
int i,j;
for(i=0;i<ligne;i++){
         for(j=0;j<colone;j++){

            printf("%4d",T[i][j]);
         }
         printf("\n");
}
}
//----------------------------------------------------------
void sommeMAT(int **T1,int **T2,int **T3,int ligne,int colonne){
int i,j;
     for(i=0;i<ligne;i++) {
T3[i]=(int*)malloc(colonne*sizeof(int));
        for(j=0;j<colonne;j++){
         T3[i][j]=T1[i][j]+T2[i][j]   ;
 }
     }
}
//----------------------------------------------------------
void soustractionMAT(int **T1,int **T2,int **T3,int ligne,int colonne){
int i,j;
     for(i=0;i<ligne;i++) {
T3[i]=(int*)malloc(colonne*sizeof(int));
        for(j=0;j<colonne;j++){
         T3[i][j]=T1[i][j]-T2[i][j]   ;
 }
     }
}
//----------------------------------------------------------
void multiplicationMAT(int **T1,int **T2,int **T3,int ligne,int colonne){
int i,j;
     for(i=0;i<ligne;i++) {
T3[i]=(int*)malloc(colonne*sizeof(int));
        for(j=0;j<colonne;j++){
         T3[i][j]=T1[i][j]*T2[i][j]   ;
 }
     }
}
//----------------------------------------------------------
void MENU(){
printf(" Bienvenue sur le menu des operations sur les MATRICES. \n ");
printf(" pour faire l'ADDITION de deux MATRICES taper:A \n " );
printf(" pour faire la SOUSTRACTION de deux MATRICES taper:S \n " );
printf(" pour faire lA MULTIPLICATION de deux MATRICES taper:M \n ");
printf(" pour QUITTER taper:Q \n ");
printf(" entrer voitre choix \n ");

}
//----------------------------------------------------------
int convert_nbr(char*chaine){
int R=0,i;
for(i=0;chaine[i];i++){
R=(R*10)+(chaine[i]-48);
}
return R;
}
//----------------------------------------------------------
int control_nbr(char*chaine){
int i;
for(i=0;chaine[i];i++){

    if(chaine[i]<48 || chaine[i]>57)
        return 0;
}
return 1;
}
//----------------------------------------------------------
void comparaison(int a,int b,int c,int *maxi,int *mini){
 *maxi=a;
 *mini=a;
if(*maxi<b && b>c)
{
    *maxi=b;
    if(c<a)
        *mini=c;
}
else if(*maxi<c && c>b)
{
    *maxi=c;
    if(b<a)
        *mini=b;
}
}
//----------------------------------------------------------
