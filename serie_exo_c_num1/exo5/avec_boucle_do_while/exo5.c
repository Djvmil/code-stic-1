#include<stdio.h>
#include<math.h>
int main(){
    /*   avec boucle do_while   */
int s,i,n;
s=0;
i=1;
   do{
        puts("veuillez saisir un entier");
        scanf("%d",&n);
        i++;
        s=s+n;
        } while(i<=5);
 printf("la somme est %d",s);

}
