/*
creer une liste chaine des etudiants et la enregistrer dans un fichier etudiants.dat
*/

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

struct etudiant {
	char nom[30];
	int code ;
	float moy ;
};

struct l_etudiant {
	struct etudiant info ;
	struct l_etudiant * suivant;	
};

struct l_etudiant * AjoutD(struct l_etudiant *tete, struct etudiant e){
	struct l_etudiant *p;
	p=malloc(sizeof(struct l_etudiant));
	strcpy(p->info.nom,e.nom);
	p->info.code=e.code;
	p->info.moy=e.moy;
	p->suivant=tete;
	return p;	 
}

void Afficher(struct l_etudiant *tete){
	struct l_etudiant * index;
	index =tete;
	while(index !=NULL){
		printf(" nom : %s",index->info.nom);
		
		printf("code : %d  ",index->info.code);
		printf(" moyenne : %0.2f \n",index->info.moy);
		index =index->suivant;
	}
}

void CreeFichier(struct l_etudiant *tete){
	FILE *fp;
	struct l_etudiant * index;
	index=tete;
	int i=0;
	
	// Création d'un fichier binaire
	fp=fopen("etudiant.dat","wb");
	if (fp == NULL)
	printf("Erreur à l'ouverture du fichier.");
	else{
	// Ajout de l'enregistrement au fichier binaire
	while(index != NULL) {
		
		fwrite(&index->info,sizeof(struct etudiant),1, fp);
		index=index->suivant;
		i++;
    }

	fclose(fp);
	printf("i = %d",i);
	}
	
}

void main(){
	struct l_etudiant * tete;
	struct etudiant e ;
	tete = NULL;
	int n ;
	int i ; 
	//Nombre element de la liste chaine 
	printf("Entre nombre element a creer : ");
	scanf("%d",&n);
	//creation de chaine de n element insersation au debut 
	printf("\n-------Remplir la chaine -----\n");
	for(i=0;i<n;i++){
		printf("\nDonner le nom etudiant %d: ",n-i);
		fflush(stdin);
		gets(e.nom);
		printf("\nDonner le code etudiant %d: ",n-i);
		scanf("%d",&e.code);
		printf("\nDonner le moy etudiant %d: ",n-i);
		scanf("%f",&e.moy);
		tete=AjoutD(tete,e);	
	}
	//afficher la chaine
	printf("\n********* Affichage**********\n"); 
    Afficher(tete);
    // creer fichier etudiant.dat
    CreeFichier(tete);


//pause system
getch();
}

