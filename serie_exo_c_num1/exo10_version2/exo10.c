#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d,e;
    printf("Veuillez saisir les valeurs entiers de a, b, c et d :\n"); scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("avant l'echange a=\v%d b=%d c=%d d=%d\n",a,b,c,d);

        if(a>b){
            e=a;
            a=b;
            b=e;
        }
        if(a>c){
            e=a;
            a=c;
            c=e;
        }
        if(a>d){
            e=a;
            a=d;
            d=e;
        }
        if(b>c){
            e=b;
            b=c;
            c=e;
        }
        if(b>d){
            e=b;
            b=d;
            d=e;
        }
        if(c>d){
            e=c;
            c=d;
            d=e;
        }

            printf("Apres l'echange a=%d b=%d c=%d d=%d",a,b,c,d);



}
