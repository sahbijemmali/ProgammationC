/*

*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

struct etudiant {
	int code ;
	float moy ;
};

struct petudiant {
	struct etudiant et ;
	struct petudiant * suivant;	
};

struct petudiant * AjoutD(struct petudiant *tete, struct etudiant e){
	struct petudiant *p;
	p=malloc(sizeof(struct petudiant));
	p->et.code=e.code;
	p->et.moy=e.moy;
	p->suivant=tete;
	return p;	 
}

void Afficher(struct petudiant *tete){
	struct petudiant * index;
	index =tete;
	while(index !=NULL){
		printf("code : %d  ",index->et.code);
		printf(" moyenne : %0.2f \n",index->et.moy);
		index =index->suivant;
	}
}

void main(){
	struct petudiant * tete;
	struct etudiant e ;
	tete = NULL;
	int n ;
	int i ;
	//Nombre element de la liste chaine 
	printf("Entre nombre element a creer : ");
	scanf("%d",&n);
	//creation de chaine de n element insersation au debut 
	printf("\n-------Remplir la chaine -----\n");
	for(i=0;i<n;i++){
		printf("\nDonner le code etudiant %d: ",n-i);
		scanf("%d",&e.code);
		printf("\nDonner le moy etudiant %d: ",n-i);
		scanf("%f",&e.moy);
		tete=AjoutD(tete,e);	
	}
	//afficher la chaine
	printf("\n********* Affichage**********\n"); 
    Afficher(tete);


//pause system
getch();
}

