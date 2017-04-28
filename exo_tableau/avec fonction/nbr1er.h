#include<stdio.h>
int nbr1er(int n){
                    int i;
                     if(n==1 || n==2){return 1;}

                     for(i=2;i<=n/2;i++){
                        if(n%i=0){return 0;}
                             }
                        return 1;
                    }

