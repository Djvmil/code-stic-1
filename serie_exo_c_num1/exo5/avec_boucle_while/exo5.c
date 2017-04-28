#include<stdio.h>
#include<math.h>
int main(){
    /*   avec boucle while   */
int s=0,i=1,n;
    while(i<=5){
        puts("veuillez saisir un entier");
        scanf("%d",&n);
        s=s+n;
        i++;

    }
 printf("la somme est %d",s);
}
