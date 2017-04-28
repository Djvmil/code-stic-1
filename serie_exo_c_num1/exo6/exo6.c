#include<stdio.h>
#include<math.h>
main(){
float x1,x2,y1,y2,distance;
    printf("veuillez entrer les coordonnées de A(x et y):\n");
        scanf("%f%f",&x1,&y1);

    printf("veuillez entrer les coordonnées de B(x et y) : \n");
        scanf("%f%f",&x2,&y2);

        distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("la distance entre A et B est :\n%d metre",distance);
}
