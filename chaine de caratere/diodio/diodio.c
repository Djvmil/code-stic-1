#include<stdio.h>
int cmp(char ch[],int t[]){
    int i,j=0;
    for(i=0;ch[i];i++){
            /*if (ch[i+1]<=ch[i]||ch[i]>=ch[i+1]){*/
              t[j] =ch[i+1]-ch[i];
              j++;


    }
return j-1;
}
main(){
char ch[25];
int t[95];
int appelle;
int i,j;
printf("saisir la chaine:\t");
gets(ch);
appelle=cmp(ch,t);
for(j=0;j<appelle;j++){
    printf("%d:\n",t[j]);
}
}
