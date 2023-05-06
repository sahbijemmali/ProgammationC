/*
Liste simple chainé ,
-creer 3 structures element v1 ,v2,v3  : contient case entier information et case pointeur structure  pour realsier la liaison entre eux ;
-lire et afficher  l'information des v1,v2,v3 :
1- a l'aide de v1 ,v2,v3;
2- a l'aide seulement v1,v2 ;
3- a l'aide seulement v1 ;
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

struct element {
	int info;
	struct element *suivant;
};

void main(){
	struct element v1,v2,v3;
	v3.suivant=NULL;
	v2.suivant=&v3;
	v1.suivant=&v2;
// 1- lire et afficher a l'aide v1,v2,v3
	printf("\n---Lire et affichera l aide v1 v2 v3----\n");	
	// lire les informations
	printf("\n-----Entrer information------");
	printf("\n Donner information de v1 ");
	scanf("%d",&v1.info);
	printf("\n Donner information de v2 ");
	scanf("%d",&v2.info);
	printf("\n Donner information de v3 ");
	scanf("%d",&v3.info);
		// afficher  les informations
	printf("\n-----afficher  information------");
	printf("\n v1.info = %d " ,v1.info);
	printf("\n v2.info = %d " ,v2.info);
	printf("\n v3.info = %d " ,v3.info);
// 2- lire et afficher a l'aide v1,v2
	printf("\n---Lire et affichera l aide v1 v2 ----\n");
	// lire les informations
	printf("\n-----Entrer information------");
	printf("\n Donner information de v1 ");
	scanf("%d",&v1.info);
	printf("\n Donner information de v2 ");
	scanf("%d",&v2.info);
	printf("\n Donner information de v3 ");
	scanf("%d",v2.suivant);
	// afficher  les informations
	printf("\n-----afficher  information------");
	printf("\n v1.info = %d " ,v1.info);
	printf("\n v2.info = %d " ,v2.info);
	printf("\n v3.info = %d " ,v2.suivant->info);
// 3- lire et afficher a l'aide v1 seulement 
	printf("\n---Lire et affichera l aide v1 v2 ----\n");
	// lire les informations
	printf("\n-----Entrer information------");
	printf("\n Donner information de v1 ");
	scanf("%d",&v1.info);
	printf("\n Donner information de v2 ");
	scanf("%d",v1.suivant);
	printf("\n Donner information de v3 ");
	scanf("%d",(v1.suivant)->suivant);
	// afficher  les informations
	printf("\n-----afficher  information------");
	printf("\n v1.info = %d " ,v1.info);
	printf("\n v2.info = %d " ,v1.suivant->info);
	printf("\n v3.info = %d " ,v1.suivant->suivant->info);

	
			


//pause system
getch();
}

