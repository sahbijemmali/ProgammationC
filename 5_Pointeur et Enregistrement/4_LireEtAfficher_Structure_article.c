/*
-creer structure article 
-lire element de l'article 
-afficher l'element de l'article 
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
struct article {
	int code;
	char designation[20];
	float prix;

};


void main(){
	struct article Art;
	struct article * p;
	p=&Art;
	//lire information article 
	printf("\n------Lire information------\n") ;
	printf("code article = ");
	scanf("%d",&p->code);
	printf("\ndesignation  = ");
	fflush(stdin);
	gets(p->designation);
	printf("\nprix  = ");
	scanf("%f",&p->prix);
	

	
	//afficher information article 
	printf("\n------affichage information------") ;
	printf("\ncode article= %d ",p->code);
	printf("\ndesignation article= %s ",p->designation);
	printf("\nprix article= %.2f ",p->prix);
	
	
	


//pause system
getch();
}

