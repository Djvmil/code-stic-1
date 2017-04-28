#include<stdio.h>
int nboccu(char ch[],char car)
{
    int i,cpt=0;
    for(i=0; ch[i]; i++)
    {
        if(ch[i]==car)
        {
            cpt=cpt+1;
        }
    }
    return cpt;
}
main()
{
    char ch[30],car;
    int cpt,appelle;
    printf("saisir la premiere chaine stp shupie\n");
    gets(ch);
    printf("saisir un caractere stp shupie\n");
    scanf("%c",&car);
    appelle=nboccu(ch,car);
    printf("le nombre de fois que le caractere %c apparait dans la chaine est %d\t",car,appelle);
}

