#include<stdio.h>


main(){

int a[5], i, x, aux;


	for (i=0; i<5; i++){

	printf("Escreva o elemento %d do vetor A ", i);
	scanf("%d", &a[i]);
	
}


	for (i=0; i<5; i++){		
	for (x=i+1; x<5; x++){
	
		if(a[i]==a[x])		
		
		printf ("\nO valor %i se repete", a[i]);
	
		
}
}
	
	

}

