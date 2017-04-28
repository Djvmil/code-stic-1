#include<stdio.h>

//fonction a corrigei
void suppcara(char ch[],char car)
{
    int i,j=i;
    for(i=0; ch[i]; i++)
    {
        if(ch[i]==car)
        {
            for (j=i; ch[j]; j++)
            {
                ch[i]=ch[i+1];
            }
        }
    }
}
main()
{
    char ch[30],car;
    printf("saisir la chaine");
    gets(ch);
    printf("saisir un caractere");
    scanf("%c",&car);
    suppcara(ch,car);
    printf("la chaine priver des occurences du caractere %c est %s",car,ch);
}
