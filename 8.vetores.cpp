#include<stdio.h>


main(){

int n[6];
int i, soma=0 ;

	for (i=0; i<4; i++){

	printf("Escreva o elemento %d ", i);
	scanf("%d", &n[i]);
}


	for (i=0; i<4; i++)
	soma= soma + n[i];
	printf("A media dos elementos eh %d\n",soma/4);
	
	}
