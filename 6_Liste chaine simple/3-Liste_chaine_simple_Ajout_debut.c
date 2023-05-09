/*
liste chaine : 
-Creer une liste chainé de n element  et l'afficher ;
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

//pause system
getch();
}
