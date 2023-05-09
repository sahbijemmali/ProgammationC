
/*
liste chaine : ajouter a la fin 
-Creer fonction dernier 
-creer fonction Ajouter fin
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
struct element{
	int information;
	struct element *suivant;

};
typedef struct element element;


struct element *Dernier( struct element *tete){
	//retourner le dernier element de la chaine
	struct element *index ;
	struct element *dernier;
	index=tete ;
	dernier=tete;
	while(index !=NULL){
		dernier=index;
		index=index->suivant;
	};
	return dernier;	
}
struct element * AjoutF(struct element *tete, int x){
	//ajouter element a la fin de liste
	element *p;
	element * dernier ;
	p=malloc(sizeof(element));
	
	if(tete==NULL){
		p->information=x;
		p->suivant=NULL;
		tete=p;
	}else{
		dernier=Dernier(tete);
		p->information=x;
		p->suivant=NULL;
		dernier->suivant=p;	
	}
	
	return tete;	 
}

void Afficher(struct element *tete){
	printf("\n---- la Liste chaine : \n");
	//Afficher les element d'une liste
	element * index;
	index =tete;
	while(index !=NULL){
		printf(" %d |",index->information);
		index =index->suivant;
	}
}
void main(){
	element *tete ;
	tete=NULL ;
	int n;
	int i ;
	int x;
	// Entrer le nombre element de la liste 
	do {
		printf("Entrer le nombre d element de la liste : ");
		scanf("%d",&n);
	} while(!(n>0));
	
	//creation d'une chaine de n element : ajout par la fin 
	printf("\n-------Remplir la chaine -----\n");
	for(i=0;i<n;i++){
		printf("\nDonner information d element %d: ",i+1);
		scanf("%d",&x);
		tete=AjoutF(tete,x);	
	}
	
	//afficher la chaine 
    Afficher(tete);



//pause system
getch();
}

