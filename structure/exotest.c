#include"chaine.h"

int main()
{
char text[100],text1[100], text2[3];
int i,a,T[10];
  printf("Saisir un texte:\n");
    gets(text);


if(isNumeriqueMoi(text)==0)
    printf("numerique");
if(isNumeriqueMoi(text)==1)
    printf("Faux");



  /*  printf("Saisir un texte:\n");
    gets(text1);

printf("text est: %d\n", my_strlen(text));
printf("text1 est: %d\n", my_strlen(text1));
a=rech_sschaine1(text,text1,T);
    if(a!=-1)
        afficheTAB(T,a+1);
    else
        printf("la chaine B ne se trouve pas dans A\n");



copiChaine(text,text2,0,2);
printf("compp %d",strlcmp("76",text2));
*/
printf("\n");
system("pause");
return 0;
}
