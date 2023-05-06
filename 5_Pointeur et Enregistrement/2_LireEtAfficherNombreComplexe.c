/*
Pointeur et enregistrement : lire et afficher a partir pointeur 
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
struct complexe {
	float reel;
	float imaginaire;

};

void main(){
	struct complexe comp;
	
	// declaration pointeur de type structure nombre complexe
	struct complexe *pcomp;
	//initialisation pointeur vers le variable complexe comp
	pcomp=&comp;
	
	//lire valeur 
	
	
	//affichage
	printf("------Resultat  -------\n");
	printf("reel= %.2f",pcomp->reel);
	printf("|imaginaire = %.2f",pcomp->imaginaire);
	

//pause system
getch();
}

