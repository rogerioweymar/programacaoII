#include<stdio.h>


main(){

int n[10];
int i, soma=0 ;

	for (i=0; i<10; i++){

	printf("Escreva o elemento %d ", i);
	scanf("%d", &n[i]);
}


	for (i=0; i<10; i++)
	if (n[i]%2 == 0)
	printf("Os numeros pares sao %d\n",n[i]);
	
	}
