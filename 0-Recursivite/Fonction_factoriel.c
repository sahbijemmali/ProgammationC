/*
réaliser la  fonction factoriel  par la methode recursive
*/
#include<stdio.h>

int fact(int n){
	int k ;
	if(n==0){ return 1;	}
	else{ return n*fact(n-1);}
}

void main(){
	int a ;
	a=fact(5);
	printf("%d",a)


//pause system
getch();
}

