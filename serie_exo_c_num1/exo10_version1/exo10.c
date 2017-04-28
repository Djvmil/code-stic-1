#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d;
printf("Veuillez saisir les valeurs entiers de a, b et c :\n"); scanf("%d%d%d",&a,&b,&c);
printf("avant l'echange a=%d b=%d c=%d\n",a,b,c);

            if(a>b){
                    d=a;
                    a=b;
                    b=d;
            }

            if(a>c){
                    d=a;
                    a=c;
                    c=d;
            }
            if(b>c){
                    d=b;
                    b=c;
                    c=d;
            }

            printf("Apres l'echange a=%d b=%d c=%d",a,b,c);




getch();
return 0;
}
