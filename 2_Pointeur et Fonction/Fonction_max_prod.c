/*
-Ecrire un programme qui permet la saisie de deux nombres entiers 
 et qui cherche leur max et leur produit.
Ce programme va faire l'appel à :
1-la fonction saisie(int *) :
    permettant la saisie d'un entier strictement positif inférieur à 1000,
2-la fonction max_prod(int, int, int*, int*):
   qui détermine le max et le produit de deux entiers donnés.

*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void saisie(int*x){
	do{
		printf("Donner un entier strictement positif inferieur a 1000 \n");
		scanf("%d",x);
	}while(*x<0||*x>1000);
}
void max_produit(int a,int b,int*m,int*p){
	if(a>b) {*m=a;}
	else {*m=b;}
	*p=a*b;	
}

void main()
{
	int a,b,m,p ;
//	saisir les deux entier a et b
printf("-------fonction saisie a--------- \n");
	saisie(&a);
printf("\n-------fonction saisie b---------\n");
	saisie(&b);	
//	determiner le max et le produit
printf("-------fonction max prod --------\n");
	max_produit(a,b,&m,&p);
	printf("M=%d et P=%d",m,p);
	


//pause system
getch();
}
