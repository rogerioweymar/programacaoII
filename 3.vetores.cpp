#include<stdio.h>


main(){

int n[9];
int i, soma=0 ;

	for (i=0; i<9; i++){

	printf("Escreva o elemento %d ", i);
	scanf("%d", &n[i]);
}


	for (i=0; i<9; i++)
	if (n[i]<0)
	printf("Os numeros negativos sao %d\n",n[i]);
	
	}
