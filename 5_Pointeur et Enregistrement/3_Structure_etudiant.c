/*
Pointeur et enregistrement : structure etudiant 
-realiser un structure etudiant 
-pointer sur  variable du structure etudiant 
-changer les valeurs de ce variable a l'aide du pointeur
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
struct etudiant {
	int code;
	float moyenne;

};

void main(){
	struct etudiant etud={2,12.5}; 
	//declaration pointeur de type etudiant 
	struct etudiant * petud ;
	//initialisation 
	petud=&etud;
	
	//affichage avant changement 
	printf("\n------resultat 1 -----\n");
	printf("code = %d",petud->code);
	printf("|moyenne = %.2f",petud->moyenne);
	//changer les valeurs a l'aide pointeur 
	
	petud->code=50 ;
	petud->moyenne=15.23;
	
	//affichage apres changement 
	printf("\n------resultat 2 -----\n");
	printf("code = %d",petud->code);
	printf("|moyenne = %.2f",petud->moyenne);
	
//pause system
getch();
}

