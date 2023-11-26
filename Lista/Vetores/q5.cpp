#include <stdlib.h>
#include <stdio.h>

int main (){
	int i=0;
	int v1[20];
	int v2[20];
	int v3[i];
	int v4[i];
	int v5[i];
	
	for (i = 0; i<20; i=i+1) {
		printf("Digite os valores do primeiro vetor:");
		scanf("%i", &v1[i]);
	}
	for (i=0; i<20; i=i+1){
		printf("Digite os valores do segundo vetor:");
		scanf("%i", &v2[i]);
	}
	for (i=0; i<20; i++){ 
		v3[i]=v1[i]-v2[i];
		v4[i]=v1[i]+v2[i];
		v5[i]=v1[i]*v2[i];
	}
	printf("Terceiro vetor:");
	for (i=0; i<12; i++){
		printf("%i", v3);
		printf("\n");
	}
		printf("Quarto vetor:");
	for (i=0; i<12; i++){
		printf("%i", v4);
		printf("\n");
}
	printf("Quinto vetor:");
	for (i=0; i<12; i++){
		printf("%i", v5);
		printf("\n");
	}
	return (0);
}
