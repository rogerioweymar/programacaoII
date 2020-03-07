#include<stdio.h>


main(){

int n[7];
int i, j, cont ;

	for (i=0; i<7; i++){

	printf("Escreva o elemento %d ", i);
	scanf("%d", &n[i]);
}

	for (i=0; i<7; i++){

	cont=0;
	
	for (j=1; j<=n[i]; j++){

	if (n[i]%j == 0)
		cont= cont+1;
	
	}
	
	if (cont==2)
	printf("%d   %d\n", n[i], i);
	
}
}
