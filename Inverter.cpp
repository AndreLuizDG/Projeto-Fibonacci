#include <stdio.h>

int main()
{
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    char invertida[100];
    int i, j = 0;
    for (i = tamanho - 1; i >= 0; i--) {
        invertida[j] = palavra[i];
        j++;
    }
    invertida[j] = '\0';

    printf("Palavra invertida: %s", invertida);

    return 0;
}
