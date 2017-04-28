#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

void saisirTAB(int T[], int taille)
{
    int i;
    for(i=0; i<taille; i++)
    {
        printf("T[%d]:",i);
        scanf("%d",&T[i]);
    }
}
//----------------------------------------------------------------------------
void afficheTAB(int T[],int taille )
{
    int i;
    for(i=0; i<taille; i++)
        printf("T[%d]=%d\t",i,T[i]);
}
//----------------------------------------------------------------------------
void saisirMAT(int T,int ligne,int colonne)
{
    int i,j;
    for(i=0; i<ligne; i++)
    {
        for(j=0; j<colonne; j++)
        {
            printf("T[%d][%d]:",i,j);
            scanf("%d",&T);
        }
    }
}
//----------------------------------------------------------------------------
void afficheMAT(int T,int ligne,int colonne)
{
    int i,j;
    for(i=0; i<ligne; i++)
    {
        for(j=0; j<colonne; j++)
        {
            printf("%d ",T);
        }
        printf("\n");
    }
}
//----------------------------------------------------------
int PGCD(int a,int b)
{
    while(a!=b)
    {

        if(a<b)
        {
            b=b-a;
        }

        else
            a=a-b;
    }
    return a;
}
//----------------------------------------------------------------------------
void RangeTAB(int T[])
{
    int i,j,taille,echange;
    for (i=0; i<taille; i++)
    {
        for (j=i+1; j<taille; j++)
        {
            if (T[i] > T[j])
            {
                echange = T[i];
                T[i] = T[j];
                T[j] = echange;
            }
        }
    }
}
//----------------------------------------------------------------------------
/*void RangeMAT(int T){
    int i,j,k=0,l=0,taille,echange;
    for (i=0;i<taille;i++)
    {
        for (j=i+1;j<taille;j++)
        {
            if (T > T)
            {
                echange = T;
                 T = T;
                T = echange;
            }
        }
    }
}*/

//-----------------------------------------------------------------------------------
int my_strlen(char texte[])
{
    int i;
    for(i=0; texte[i]; i++);
    return i;
}
//------------------------------------------------------------------------------------

void my_strncpy(char texte1[], char texte2[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        texte2[i]=texte1[i];
    }
    texte2[i]='\0';
}

//--------------------------------------------------------------------------------------

int nbOccurrence(char texte[],char car)
{
    int i,cpt=0;
    for(i=0; texte[i]!='\0'; i++)
    {
        if(texte[i]==car)
            cpt++;
    }
    return cpt;
}

//------------------------------------------------------------------------------------

void copiChaine(char texte[], char texte1[],int debut, int n)
{
    int i=debut,j=0,l=0;

    while(l<n)
    {
        texte1[j]=texte[i];
        j++;
        i++;
        l++;
    }
    texte1[j]='\0';
}

//-------------------------------------------------------------------------------------
int rech_sschaine(char texte[], char texte1[])
{
    int i,j=0,pos;
    for(i=0; texte[i]; i++)
    {
        if(texte[i]==texte1[0])
        {
            pos=i;
            for(j=0; texte1[j]; j++)
            {
                if(texte[i]!=texte1[j])
                {
                    i=pos;
                    break;
                }
                i++;
            }
            if(texte1[j]=='\0')
                return pos;
        }
    }
    return -1;
}

//-------------------------------------------------------------------------------------

int rech_sschaine1(char texte[], char texte1[],int T[])
{
    int i,j=0,pos,l=-1,a;
    for(i=0; texte[i]; i++)
    {
        if(texte[i]==texte1[0])
        {
            pos=i;
            for(j=0; texte1[j]; j++)
            {
                if(texte[i]!=texte1[j])
                {
                    i=pos;
                    break;
                }
                i++;
            }
            if(texte1[j]=='\0')
            {
                l++;
                T[l]=pos;
            }
        }
    }
    if(l!=-1)
        return l;
    return -1;
}

//------------------------------------------------------------------------------------
int existe(int T[],int n, int taille)
{
    int i;
    for(i=0; i<taille; i++)
    {
        if(T[i]==n)
            return i;
    }
    return 0;
}
//------------------------------------------------------------------------------------
int isNumerique(char chaine[])
{
    int i;
    for(i=0; chaine[i]; i++)
    {
        if(chaine[i]<48 || chaine[i]>57)
            return 1;
    }
    return 0;
}
//----------------------------------------------------------------------------------
int strlcmp(char chaine[],char chaine1[])
{
    int i;
    for(i=0; chaine[i]; i++)
    {
        if(chaine[i]!=chaine1[i])
            break;
    }
    return chaine[i]-chaine1[i];
}
//------------------------------------------------------------------------------------

void majuscule(char*chaine)
{
    int i;
    for(i=0; chaine[i]; i++)
    {
        chaine[i]=toupper(chaine[i]);
    }
}
//-----------------------------------------------------------------------------------

void minuscule(char*chaine)
{
    int i;
    for(i=0; chaine[i]; i++)
    {
        chaine[i]=tolower(chaine[i]);
    }
}

//---------------------------------------------------------------------------------
int pairimp(int n)
{
    if(n%2==0)
        return 1;
    return 0;
}
//---------------------------------------------------------------------------------
int premier(int n)
{
    int i=2;
    while(n%i!=0 && i<=(n/2))
    {
        i++;
    }
    if(i>n/2)
        return 1;
    return 0;
}
//---------------------------------------------------------------------------------
int parfait(int n)
{
    int i,cpt=0;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
        {
            cpt=cpt+i;
        }
    }
    if(cpt==n)
        return 1;
    return 0;
}
//---------------------------------------------------------------------------------
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
//---------------------------------------------------------------------------------
