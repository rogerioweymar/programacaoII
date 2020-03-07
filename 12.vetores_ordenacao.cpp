#include<stdio.h>


main(){

int a[5], i, x, aux;


	for (i=0; i<5; i++){

	printf("Escreva o elemento %d do vetor A ", i);
	scanf("%d", &a[i]);
	
	}


	for (i=0; i<5; i++){		
		for (x=i+1; x<5; x++){
	
			if(a[i]>a[x]){
			
			aux=a[i];
			a[i]=a[x];
			a[x]= aux;
			}		
			
		}
}
	
	for (i=0; i<5; i++)

	printf("\n%d ", a[i]);

}

