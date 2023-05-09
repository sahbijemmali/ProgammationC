/*
 alouer tableau dynamiquement et : Remplir tableau , afficher tableau ;
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void main(){

int *T;
int n ;
int *p;

printf("donner le nombre N :");
scanf("%d",&n);

T=malloc(sizeof(int)*n);

// Remplir tableau 
	p=T;
	for(p=T;p<T+n;p++) {
		printf("T[%d] = ",p-T);
		scanf("%d",p);
	}
	
//afficher tableau 
	p=T;
	for(p=T;p<T+n;p++) {
		printf("%d|",*p);
	}
// free espaces
free(T);
T=NULL;


//pause system
getch();
}

