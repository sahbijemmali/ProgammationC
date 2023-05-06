/*
Pointeur et tableau exemple de cours .
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void main(){
	int Tab[5]={1,2,3,4,5};
	printf("%d",Tab[0]);
	printf("\n%d",*Tab);
	int *pTab ;
	pTab=Tab;
	
	printf("\npTab[0]=%d",pTab[0]);
	printf("\n %d",*(Tab+2));
	pTab[0]++;
	printf("\npTab[0]=%d",pTab[0]);
	pTab++;
	printf("\n%d",*pTab);


//pause system
getch();
}

