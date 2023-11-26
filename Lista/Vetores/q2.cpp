#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[10];
	
	printf("Digite 10 numeros para o vetor: \n");
	for (int i=0; i<10; i++) {
	scanf("%d", &v[i]);
	}
	printf("O valor inverso deste vetor e: \n");
	for (int i=9; i>=0; i--){
		printf("%d", v[i]);
	}
	return(0);
}
