/*
Realiser la fonction echange valeur de deux variables , et l'appeller dans main

*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void echange(int *a , int *b){
	int aux ;
	aux=*a ;
	*a=*b;
	*b=aux;
}



void main(){
	int n ;
	int k ;
	n=2 ;
	k=5;
	printf("n=%d|k=%d",n,k);
	echange(&n,&k);
	printf("\n n=%d|k=%d",n,k);

//pause system
getch();
}

