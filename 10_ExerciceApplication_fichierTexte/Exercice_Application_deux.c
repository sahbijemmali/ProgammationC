/*
lire fichier etudiant.dat

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


int RecupFichier( 	struct etudiant tab[] ){
	FILE *fp;
	int i ;
	i=0;
	// Ouvrir un fichier binaire
	fp=fopen("etudiant.dat","rb");
	if (fp == NULL)
	printf("Erreur à l'ouverture du fichier.");
	else{
	// Afficher fichier
	fread(&tab[i],sizeof(struct etudiant),1, fp);
	while(!feof(fp)) {
		i++;
		fread(&tab[i],sizeof(struct etudiant),1, fp);	
    }
	fclose(fp);
	return(i);
	}
}

void afficherTab(struct etudiant tab[],int n){
	
   struct etudiant  *p;
   
   p=tab;
   printf("***********\n");
   for(p=tab;p<tab+n;p++) {
   printf("%s|",p->nom);
   printf("%d|",p->code);
   printf("%0.2f|\n",p->moy);
   }
}


void main(){
	struct etudiant tab[20];
	int n;
	n=RecupFichier(tab);
	printf("\n---------\n");
	afficherTab(tab,n);

//pause system
getch();
}

