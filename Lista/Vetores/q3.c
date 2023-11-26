#include <stdlib.h>
#include <stdio.h>

int main(){
	int i;
	int v[12];
	int v2[12];
	
	for (i = 0; i < 12; i++) {
	printf("Digite os valores do vetor:");
	scanf("%i", &v[i]);
	}
	for (i=0; i<12; i++){
	if (i % 2 == 0) {
		v2[i]= v[i] / 2;
		}
	else {
	v2[i]= v[i] * 3;		
		}		
	}
	printf("Primeiro vetor:");
	for(i=0; i<12; i++) {
	printf("%i", v[i]);
	printf("\n");
	}
	printf("Segundo vetor:");
	for(i=0; i<12; i++) {
		printf("%i", v2[i]);
		printf("\n");
	}
	return(0);
}
