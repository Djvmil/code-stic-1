#include<stdio.h>
#include<math.h>
int main(){
    /*   avec boucle while   */
    int var,var2,s=0;
    printf("saisir var\n"); scanf("%d",&var);
    printf("saisir var2\n"); scanf("%d",&var2);

    while(var != var2){
        if(var > var2){
            var2++;
            printf(" var = %d\n",var2);
            s=s+var;
            }
        else{
            var++;
            printf(" var2=%d\n",var);
            s=s+var2;
            }

    }
}
