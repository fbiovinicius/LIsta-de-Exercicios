#include <stdio.h>
#include <string.h>

void inverterstring(char str[], int inicio, int fim) {
    if (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inverterstring(str, inicio + 1, fim - 1);
    }
}

int main() {
    char str[100];

    printf("Digite alguma coisa: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    inverterstring(str, 0, strlen(str) - 1);

    printf("A string invertida e: %s\n", str);

    return 0;
}

