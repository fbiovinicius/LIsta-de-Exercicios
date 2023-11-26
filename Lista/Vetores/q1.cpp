#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[15];
	
	printf("Digite 15 numeros inteiros:\n");
	for (int i=0; i<15; i++) {
	scanf("%d", &v[i]);
	}
	
	printf("Os numeros armazenados no vetor foram: ");
	for (int i=0; i<15; i++){
		printf("%d\n", v[i]);
	}
	return(0);
	
}
