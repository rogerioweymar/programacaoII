#include<stdio.h>


main(){

int a[5], b[5], c[5];
int i ;

	for (i=0; i<5; i++){

	printf("Escreva o elemento %d do vetor A ", i);
	scanf("%d", &a[i]);
	
		printf("Escreva o elemento %d do vetor B ", i);
	scanf("%d", &b[i]);
	
	c[i]= a[i]+b[i];
}


	for (i=0; i<5; i++)
	
	printf(" %d\n",c[i]);
	
	}
