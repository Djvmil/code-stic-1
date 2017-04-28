#include<stdio.h>
#include"nbr1er.h"
int main(){
     int TAB[];
     int i,trouve=;
     for(i=0;i<10;i++){
      do{
                              printf("saisir un entier %d:\n",i+1);  scanf("%d",&TAB[i]);
                    if(TAB[i]<0){printf("\nla note doit etre >0\n\nveuillez encore ");}
              } while(TAB[i]<0);
     }
     for(i=0;i<10;i++){
        printf("T[%d]\t",TAB[i]);
     }
      for(i=0;i<10;i++){
            premier=nbre1er(T[i]);
       if(premier==1){
                 printf("%d",T[i]);
                 trouve=1;
                }
        if(trouve==0){
                 printf("nobody");
                }




     }




system("pause");
return 0;
}
