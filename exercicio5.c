#include <stdio.h>

void inverterString(char *str) {
    // Encontrar o tamanho da string
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }

    // Inverter a string
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho -i -1];
        str[tamanho -i -1] = temp;
    }
}

int main() {
    char string[50];

    printf("Digite uma string: ");
    scanf("%s", string);

    inverterString(string);

    printf("Sua string invertida: %s\n", string);

    return 0;
}