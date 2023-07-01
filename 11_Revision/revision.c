/*

*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

struct date{
	int jour ;
	int mois ;
	int annee;
};

struct etudiant{
	int matricule ;
	char prenom[30];
	char nom[30];
	struct date date_naiss ;
	float moy ;
};

struct list_etudiant{
	struct etudiant etud ;
	struct list_etudiant * suivant ;
};

struct list_etudiant *Dernier( struct list_etudiant *tete){
	//retourner le dernier element de la chaine
	struct list_etudiant *index ;
	struct list_etudiant *dernier;
	index=tete ;
	dernier=tete;
	while(index !=NULL){
		dernier=index;
		index=index->suivant;
	};
	return dernier;
}

struct list_etudiant * AjoutF(struct list_etudiant *tete, struct etudiant e ){
	//ajouter element a la fin de liste
	struct list_etudiant *p;
	struct list_etudiant * dernier ;
	p=malloc(sizeof(struct list_etudiant));

	if(tete==NULL){
		p->etud.matricule=e.matricule;
		strcpy(p->etud.prenom,e.prenom);
		strcpy(p->etud.nom,e.nom);
		p->etud.date_naiss.jour=e.date_naiss.jour;
		p->etud.date_naiss.mois=e.date_naiss.mois;
		p->etud.date_naiss.annee=e.date_naiss.annee;
		p->etud.moy=e.moy;
		p->suivant=NULL;
		tete=p;
	}else{
		dernier=Dernier(tete);
		p->etud.matricule=e.matricule;
		strcpy(p->etud.prenom,e.prenom);
		strcpy(p->etud.nom,e.nom);
		p->etud.date_naiss.jour=e.date_naiss.jour;
		p->etud.date_naiss.mois=e.date_naiss.mois;
		p->etud.date_naiss.annee=e.date_naiss.annee;
		p->etud.moy=e.moy;
		p->suivant=NULL;
		dernier->suivant=p;
	}
	return tete;
}


void Afficher(struct list_etudiant *tete){
	struct list_etudiant * index;
	index =tete;
	while(index !=NULL){
		printf("%d |%s |%s |%d %d %d|%0.2f| \n",index->etud.matricule,index->etud.prenom,index->etud.nom,index->etud.date_naiss.jour,index->etud.date_naiss.mois,index->etud.date_naiss.annee,index->etud.moy);
		index =index->suivant;
	}
}



void main(){
		struct list_etudiant *tete =NULL;
	int choix ;
	
	do{
		printf("***Menu liste des choix :***\n ");
		printf("1-Creer liste etudiant\n ");
		printf("2-Ajout Debut liste etudiant\n ");
		printf("3-Ajout Fin liste etudiant\n ");
		printf("4-Afficher liste etudiant\n ");
		printf("5-Creer Fichier liste etudiant\n ");
		printf("0-Exit\n ");
		
		printf("Entrer votre choix : ")	;
		scanf("%d",&choix);
		
		switch(choix) {
		case 0 : {
			printf("Fin traitement----");
			exit(1);
			break;
		}
		case 1 :{
			int n ;
			int i;
			struct etudiant e;
		
			printf("Entrer Nombre des elements de la chaine :");
			scanf("%d",&n);
			// main function creation d'une chaine de n element : ajout par la fin
			printf("\n-------Remplir la chaine -----\n");
			for(i=0;i<n;i++){
				printf("\nDonner information etudiant %d:",i+1);
				printf("\nMatricule :");
				scanf("%d",&e.matricule);
				printf("prenom : ");
				fflush(stdin);
				gets(e.prenom);
				printf("nom : ");
				fflush(stdin);
				gets(e.nom);
				printf("Date naissance jour :");
				scanf("%d",&e.date_naiss.jour);
				printf("Date naissance mois :");
				scanf("%d",&e.date_naiss.mois);
				printf("Date naissance annee :");
				scanf("%d",&e.date_naiss.annee);
				printf("moyenne :");
				scanf("%f",&e.moy);
				tete=AjoutF(tete,e);
			}
			
			break;
		}
		case 2 :{
			break;
		}
		case 3 :{
			break;
		}
		case 4 :{
			Afficher(tete);
			break;
		}
		case 5 :{
			break;
		}
		default:{printf("Erreur choix ");
		break;
		}
	}

	} while(choix !=0);
	



//pause system
getch();
}

