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

struct element * AjoutD(struct element *tete, int x){
	element *p;
	p=malloc(sizeof(element));
	p->information=x;
	p->suivant=tete;
	return p;	 
}
void Afficher(struct element *tete){
	element * index;
	index =tete;
	while(index !=NULL){
		printf("%d |",index->information);
		index =index->suivant;
	}
}
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
	dernier=Dernier(tete);
	p->information=x;
	p->suivant=NULL;
	dernier->suivant=p;
	return tete;	 
}


void main(){
	element *tete ;
	tete=NULL ;
	int n;
	int i;
	int x;
	//Nombre element de la liste chaine 
	printf("Entre nombre element a creer : ");
	scanf("%d",&n);
	
	//creation de chaine de n element
	printf("\n-------Remplir la chaine -----\n");
	for(i=0;i<n;i++){
		printf("\nDonner information d element %d: ",n-i);
		scanf("%d",&x);
		tete=AjoutD(tete,x);	
	}
	//afficher la chaine 
    Afficher(tete);
    // insrere element a la fin de la liste 
	printf("\n-------Ajouter element a la liste par dernier---\n") ;
    tete=AjoutF(tete,10);
    Afficher(tete);
    

//pause system
getch();
}

