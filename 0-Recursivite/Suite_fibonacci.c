/*
-Afficher tous les termes de la suite de Fibonacci inférieur ou egal a n :
suite fibonacci :
-U(o) = 0
-U(1) = 1
- U(n)=U(n-1)+U(n-2)

*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int Fibonacci(int n){
	if(n==0) { return 0;
	}else if(n==1){return 1 ;
	}else{ return Fibonacci(n-1)+Fibonacci(n-2);
	}
}


void main(){
	int n;
	int i;
	
	do {
		printf("Enter index element n = ");
		scanf("%d",&n);
    } while(!(n>=0));
    
    printf("\n------Suite Finonacci-----\n");
    
    for(i=0;i<n+1;i++) {
    	printf("%d |",Fibonacci(i));
	}

    



//pause system
getch();
}

