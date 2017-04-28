#include<stdio.h>
#include<math.h>
int main(){
    /*   avec boucle do_while   */
    int var,var2;
    printf("saisir var\n"); scanf("%d",&var);
    printf("saisir var2\n"); scanf("%d",&var2);

    do{
        var2++;
        printf("var = %d\t",var);
    }
    while(var > var2);
}
