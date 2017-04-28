#include<stdio.h>

main()
{
    int nbrinscrit,nbrvotant,nbrvoix1,nbrvoix2,nbrvoix3,rest,sommevoix,nbrdeput1,nbrdeput2,nbrdeput3;
    float cand1,cand2,cand3;
//la saisi
        do{
             printf("veuillez saisir le nombre d'inscrits :\n"); scanf("%d",&nbrinscrit);
            }   while(nbrinscrit<0);
        do{
             printf("veuillez saisir le nombre de votants :\n"); scanf("%d",&nbrvotant);
            }   while(nbrvotant<0 || nbrvotant>nbrinscrit);
        do{
             printf("veuillez saisir le nombre de voix pour le 1er candidat :\n"); scanf("%d",&nbrvoix1);
            }   while(nbrvoix1<0 || nbrvoix1>nbrvotant);
            rest=nbrvotant-nbrvoix1;
        do{
             printf("veuillez saisir le nombre de voix pour le 2e candidat :\n"); scanf("%d",&nbrvoix2);
            }   while(nbrvoix2<0 || nbrvoix2>rest);
        do{
             printf("veuillez saisir le nombre de voix pour le 3e candidat :\n"); scanf("%d",&nbrvoix3);
            }   while(nbrvoix3<0 || nbrvoix3>(rest-nbrvoix2));

                sommevoix=nbrvoix1+nbrvoix2+nbrvoix3;

//calcule des pourcentage
        if(sommevoix==0){printf("il n'y a pas de vote pendant les elections,\n\n");}
        else{
	cand1=(float)(nbrvoix1*100)/(float)sommevoix;
	cand2=(float)(nbrvoix2*100)/(float)sommevoix;
	cand3=(float)(nbrvoix3*100)/(float)sommevoix;

//affichage de pourcentage et bulletins nuls
                printf("Le 1er candidat a %.2f%% des voix.\n\n",cand1);
                printf("Le 2e candidat a %.2f%% des voix.\n\n",cand2);
                printf("Le 3e candidat a %.2f%% des voix.\n\n",cand3);
                printf("Il y'a %d bulletins nuls.\n\n",nbrvotant-sommevoix);

//le gagnant
        if(cand1>cand2 && cand1>cand3){printf("Le gagnant est le 1er candidat.\n\n");}
        if(cand2>cand1 && cand2>cand3){printf("Le gagnant est le 2e candidat.\n\n");}
        if(cand3>cand2 && cand3>cand1){printf("Le gagnant est le 3e candidat.\n\n");}

//calcule du partage des 120 deputes
        nbrdeput1=(120*cand1)/100;
        nbrdeput2=(120*cand2)/100;
        nbrdeput3=(120*cand3)/100;

//affichage du partage des 120 deputes
                printf("Le 1er candidat a %d deputes.\n\n",nbrdeput1);
                printf("Le 2e candidat a %d deputes.\n\n",nbrdeput2);
                printf("Le 3e candidat a %d deputes.\n\n",nbrdeput3);
                        }

system("pause");
return 0;
}
