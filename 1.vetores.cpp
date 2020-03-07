#include<stdio.h>

// 1.	FAÇA UM PROGRAMA QUE PREENCHA UM VETOR COM QUATRO NÚMEROS INTEIROS E MOSTRE TODOS OS VALORES.


main(){

int n[4];
int i;

	for (i=0; i<4; i++){

	printf("Escreva o elemento %d ", i);
	scanf("%d", &n[i]);
}


	for (i=0; i<4; i++)
	printf("O elemento %d possui o valor %d\n",i, n[i]);
	
	}
