#include<stdio.h>


main(){

int n[5];
int i, soma=0 ;

	for (i=0; i<5; i++){

	printf("Escreva o elemento %d ", i);
	scanf("%d", &n[i]);
}


	for (i=0; i<5; i++)
	if (n[i]%2 != 0)
	printf("Os numeros impares sao %d\n",n[i]);
	
	}
