/*
liste simple chaine : allocation dynamique
-creer fonction ajoutD : ajouter element dans une chaine 
-creer fonction affichage : afficher tous les element dans une liste 
-main program : ajouter un element v0 à une chaine de 3 elements et les affichers. 
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

struct element {
	int information;
	struct element *suivant;
};
typedef struct element element;

//fonction ajouter element a une liste
// x = information d'element ajouté , tete = structure a ajouter l element a cote pour former la chaine 
struct element * AjoutD( struct element *tete , int x){
	element *p=malloc(sizeof(element));
	p->information=x;
	p->suivant=tete;
	return(p);
}

//fonction afficher  les elements d'une liste 
void Afficher(struct element *tete){
	element * index;
	index = tete ;
	while(index != NULL) {
		printf("%d|",index->information);
		index=index->suivant;
	}
}

void main(){
//creation manuelle d'une liste de 3 elements 
	//declaration variables 
	element *V1;
	element *V2;
	element *V3;
	//allocation dynamique
	V1=malloc(sizeof(element));
	V2=malloc(sizeof(element));
	V3=malloc(sizeof(element));
	// creer liaison pour former la liste 
	(V3->suivant)=NULL;
	(V1->suivant)=V2;
	(V2->suivant)=V3;
	//Remplir le sinformations des 3 elements 
	printf("Donner info pour v1: ");
	scanf("%d",&(V1->information));
	printf("Donner info pour v2: ");
	scanf("%d",&(V2->information));
	printf("Donner info pour v3: ");
	scanf("%d",&(V3->information));
//Ajout du 4 eme element au debut avec 2 comme information
	element *V0;
	int info;
	printf("\nEntrer l information de nouveau element: ");
	scanf("%d",&info);
	V0=malloc(sizeof(element));
	V0=AjoutD(V1,info);
	// afficher la nouvelle liste de 4 element 
	Afficher(V0);
	
	
//pause system
getch();
}

