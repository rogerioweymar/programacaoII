#include<stdio.h>


main(){

int n[6];
int i, soma=0 ;

	for (i=0; i<6; i++){

	printf("Escreva o elemento %d ", i);
	scanf("%d", &n[i]);
}


	for (i=0; i<6; i++)
	soma= soma + n[i];
	printf("A soma dos elementos eh %d\n",soma);
	
	}
