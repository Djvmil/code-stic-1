#include<stdio.h>
#include<math.h>
#include<conio.h>

void afficheTAB (int T[],int taille ){
int i;
for(i=0;i<taille;i++)
printf("T[%d] = %d\n",i,T[i]);
}
//--------------------------------------------------------------------------------------------
int my_strlen(char texte[])
{
int i;
    for(i=0;texte[i];i++);
    return i;
}
//--------------------------------------------------------------------------------------------

void my_strncpy(char texte1[], char texte2[],int n)
{
int i;
    for(i=0;i<n;i++)
    {
        texte2[i]=texte1[i];
    }
    texte2[i]='\0';
}

//--------------------------------------------------------------------------------------------

int nbOccurrence(char texte[],char x)
{
int i,cpt=0;
    for(i=0;texte[i]!='\0';i++)
    {
        if(texte[i]==x)
            cpt++;
    }
    return cpt;
}

//--------------------------------------------------------------------------------------------

void copiChaine(char texte[], char texte1[],int debut, int n)
{
int i=debut,j=0,l=0;

   while(l<n)
    {
        texte1[j]=texte[i];
        j++; i++; l++;
    }
    texte1[j]='\0';
}

//--------------------------------------------------------------------------------------------

int rech_sschaine(char texte[], char texte1[])
{
int i,j=0,pos;
    for(i=0;texte[i];i++)
    {
        if(texte[i]==texte1[0])
        {
            pos=i;
            for(j=0;texte1[i];j++)
            {
                if(texte[i]!=texte1[j])
                {
                    i=pos; break;
                }
                i++;
            }
                if(texte1[j]=='\0')
                    return pos;
        }
    }
return -1;
}

//--------------------------------------------------------------------------------------------

int rech_sschaine1(char texte[], char texte1[],int T[])
{
int i,j=0,pos,l=-1,a;
    for(i=0;texte[i];i++)
    {
        if(texte[i]==texte1[0])
        {
            pos=i;
            for(j=0;texte1[j];j++)
            {
                if(texte[i]!=texte1[j])
                {
                    i=pos; break;
                }
                i++;
            }
                if(texte1[j]=='\0')
                {
                    l++; T[l]=pos;
                }
        }
    }
    if(l!=-1)
        return l;
return -1;
}
//-------------------------------------------------------------------------------------------

int isNumeriqueMoi(char T[])
{
    int i,j=0;
    char T1[9]="0123456789";
    for(i=0;T[i];i++)
    {
        for(j=0;j<9;j++)
        {
            if(T[i]!=T1[j])
                return 1;
        }
    }
return 0;
}

//-------------------------------------------------------------------------------------------
int isNumeriqueNiass(char chaine[])
{
    int i;
    for(i=0;chaine[i];i++)
    {
            if(chaine[i]<48 || chaine[i]>57);
                return 1;
    }
return 0;
}
//-------------------------------------------------------------------------------------------
int strlcmp(char chaine[],char chaine1[])
{
    int i;
    for(i=0;chaine[i];i++)
    {
        if(chaine[i]!=chaine1[i])
            break;
    }
return chaine[i]-chaine1[i];
}
//-------------------------------------------------------------------------------------------
int my_atoi(char*ch){
int i=0,r=0;
while(ch[i])
{
    r=r*10+ch[i]-48;
    i++;
}
return r;
}
//-------------------------------------------------------------------------------------------
void suppCar(char text[], char car)
{
int i,j=0;
    for(i=0;text[i];i++)
    {
        if(text[i]!=car)
        {
            text[j]=text[i];
            j++;
        }
    }
    text[j]='\0';
}

