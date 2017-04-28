#include<stdio.h>
#include<math.h>
int carrexist(int T,int i){
int un;
float deux;

    un=sqrt(i);
      deux=sqrt(i);
        if(un==deux){
        return 1;
                }

return 0;
}

int main(){
    int i,V;

for(i=1;i<7;i++){
                 if(carrexist(V,i)==1){

                    printf("%d",i);
                    }

                }


printf("\n\n");
system("pause");
return 0;
}

