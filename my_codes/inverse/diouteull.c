#include<stdio.h>
#include<conio.h>
int main()
{
    int entier,reste=0;
    printf("Veuillez entrer un entier\n");
    scanf("%d",&entier);
    do
    {
        reste=entier%10;
        entier=entier/10;
        printf("%d - ",reste);
    }
    while(entier);


    system("pause");
    return 0;
}
