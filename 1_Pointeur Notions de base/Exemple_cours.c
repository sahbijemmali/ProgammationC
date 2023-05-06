/*
Pointeur Notion de base 
exemple de cours :


*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void main(){
	int n ;
	n=6;
	// *(&n)=6
	printf("%d",*(&n));
	//declaration 
	printf("----------Exemple 1-----------");
	int *p;
	p=&n;
	printf("\n%p",p);
	printf("\n%d",*p);
	
	printf("\n----------Exemple 2-----------\n");
	
	char *C;
	char c='A';
	C=&c ;
	*C='B';
	printf("%c",c);
	

//pause system
getch();
}

