#include<stdio.h>

void suppCar(char text[], char car)
{
    int i,j=0;
    for(i=0; text[i]; i++)
    {
        if(text[i]!=car)
        {
            text[j++]=text[i];
        }
    }
    text[j]='\0';
}

int my_strlen(char texte[])
{
    int i;
    for(i=0; texte[i]; i++);
    return i;
}

int main()
{
    char text[101],car;
    do
    {
        printf("Saisir le texte:\n");
        gets(text);
        if(my_strlen(text)<1 || my_strlen(text)>100)
        {
            printf("la longueur du texte ne doit pas deppasser 100 caracteres\n");
        }
    }
    while(my_strlen(text)<1 || my_strlen(text)>100);


    printf("Saisir le caractere a supprimer:\n");
    scanf("%c",&car);
    suppCar(text,car);

    printf("%s",text);

    printf("\n");
    getch();
    return 0;
}
