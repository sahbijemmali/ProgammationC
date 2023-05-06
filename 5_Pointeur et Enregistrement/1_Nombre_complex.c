/*
Pointeur et enregistrement : structure nombre complexe
-realiser un structure nombre complexe 
-pointer sur  variable du structure nombre complexe
-changer les valeurs de ce variable a l'aide du pointeur

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
	struct complexe comp={1.1,1.2};
	
	// declaration pointeur de type structure nombre complexe
	struct complexe *pcomp;
	//initialisation pointeur vers le variable complexe comp
	pcomp=&comp;
	
	
	//affichage avant changement 
	printf("------Resultat 1 -------\n");
	printf("reel= %.2f",pcomp->reel);
	printf("|imaginaire = %.2f",pcomp->imaginaire);
	
	// changer la valeur de la variable comp a l'aide du pointeur 
	pcomp->	reel=1 ; //pcomp->reel <=> (*pcomp).reel
	pcomp->	imaginaire=2;
	
	//affichage 
	printf("\n------Resultat 2 -------\n");
	printf("reel= %.2f",pcomp->reel);
	printf("|imaginaire = %.2f",pcomp->imaginaire);
	
//pause system
getch();
}

