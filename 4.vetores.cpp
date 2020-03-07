#include<stdio.h>


main(){

int n[5];
int i, soma=0 ;

	for (i=0; i<5; i++){

	printf("Escreva o elemento %d ", i);
	scanf("%d", &n[i]);
}


	for (i=0; i<5; i++)
	if (n[i]>10)
	printf("Os numeros maiores que 10 sao %d\n",n[i]);
	
	}
