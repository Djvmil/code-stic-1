#include<stdio.h>
int  matauto(char ch[])
{


    if(ch[0]=='d'&&ch[1]=='k')
    {
        return 0;
    }

    return 1;
}
main()
{
    char ch[30];
    int appelle;
    printf("saisir la chaine\n");
    gets(ch);
    appelle=matauto(ch);
    if(appelle==0)
    {
        printf("la chaine saisie est un matricule auto ",ch);

    }
    else
    {
        printf("la chaine n'est pas un matricule auto");
    }
}
