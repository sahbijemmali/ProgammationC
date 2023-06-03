/*
creer une liste doublement chaine 
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

struct element {
	int info;
	struct element * suivant;
	struct element * precedent;	
};

struct element * AjoutDebut(struct element *tete, int x){
	struct element *p;
	p=malloc(sizeof(struct element));
	p->	info=x;
	p->	suivant=tete;
	if(tete != NULL){tete->precedent=p;}
	p->precedent=NULL;
	return p;	 
}

void Afficher_debut_fin(struct element *tete){
	struct element * index;
	index =tete;
	while(index !=NULL){
		printf("info : %d  ",index->info);
		printf("suivant : %p  ",index->suivant);
		printf("precedent : %p  ",index->precedent);
		index =index->suivant;
		printf("\n");
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
void Afficher_fin_debut(struct element * queu){
	struct element * index;
	index =queu;
	while(index !=NULL){
		printf("info : %d  ",index->info);
		index =index->precedent;
		printf("\n");
	}
}

void main(){
	struct element *tete ;
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
		tete=AjoutDebut(tete,x);	
	}
	//afficher la chaine 
	printf("\n affichage du debut a la fin \n");
    Afficher_debut_fin(tete);
    // afficher la chaine du fin au debut 
    printf("\n affichage du fin au debut \n");
    Afficher_fin_debut(Dernier(tete));
    

//pause system
getch();
}

