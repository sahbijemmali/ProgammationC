/*
-remplir un tableau 
-afficher un tableau
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void remplir(int *T , int n){
	int *p;
	p=T;
	for(p=T;p<T+n;p++) {
		printf("T[%d] = ",p-T);
		scanf("%d",p);
	}
}

void afficher(int*T , int n){
	int *p;
	p=T;
	for(p=T;p<T+n;p++) {
		printf("%d|",*p);
	}	
}


void main(){
	int TAB[3];
	remplir(TAB,3);
	printf("\n--------afficher----------\n");
	afficher(TAB,3);


//pause system
getch();
}
