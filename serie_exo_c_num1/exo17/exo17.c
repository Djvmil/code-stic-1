#include<stdio.h>
#include<math.h>

int main(){
    int valsaisi,i=1,maxvaleur,minvaleur,positionmax,positionmin;

        do {
            printf("Veuillez saisir une valeur entiere svp :\n"); scanf("%d",&valsaisi);

            if(maxvaleur<valsaisi){
                    maxvaleur=valsaisi;
                    positionmax=i;
                    }
            if(minvaleur>valsaisi){
                    minvaleur=valsaisi;
                    positionmin=i;
                    }
                i++;
                }while(i<=10);
printf("le plus grand des nombre saisi est :\n %d\n",maxvaleur);
printf("sa position est :\n %d\n",positionmax);
printf("le plus petit des nombre saisi est :\n %d\n",minvaleur);
printf("sa position est :\n %d\n",positionmin);

getch();
return 0;
}
