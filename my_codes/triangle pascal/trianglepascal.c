
#include <stdio.h>
main()
{
 /* D�clarations */
 int P[14][14]; /* matrice r�sultat  */
 int N;         /* degr� du triangle */
 int I, J;      /* indices courants  */
 /* Saisie des donn�es */
 do {
      printf("Entrez le degr� N du triangle (max.13) : ");
     scanf("%d", &N);
 } while (N>13||N<0);
 /* Construction des lignes 0 � N du triangle: */
 /* Calcul des composantes du triangle jusqu'� */
 /* la diagonale principale. */
 for (I=0; I<=N; I++)
     {
      P[I][I]=1;
      P[I][0]=1;
      for (J=1; J<I; J++)
            P[I][J] = P[I-1][J] + P[I-1][J-1];
     }
  /* Edition du r�sultat */
 printf("Triangle de Pascal de degr� %d :\n", N);
 for (I=0; I<=N; I++)
    {
     printf(" N=%2d", I);
     for (J=0; J<=I; J++)
          if (P[I][J])
                printf("%5d", P[I][J]);
     printf("\n");
    }
 return 0;
}
