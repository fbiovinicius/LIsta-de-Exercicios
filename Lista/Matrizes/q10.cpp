#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    printf("Digite os valores da matriz:\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i= 0; i<3; i++){
    	for (j=0; j<3;j++){
    		printf("%i\t", matriz[j][i]);
		}
		printf("\n");
	}
	return (0);
}
