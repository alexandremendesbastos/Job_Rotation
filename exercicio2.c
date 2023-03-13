#include <stdio.h>


int main() {

    int numero, a = 0, b = 1, c = 0, fib = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (c <= numero) {

        if (c == numero) {
            fib = 1;
        }
        a = b;
        b = c;
        c = a + b;
    }

    if (fib == 1) {
        printf("\nO numero %d eh pertencente a sequencia de Fibonacci.", numero);
    } 

    else {
        printf("\nO numero %d nao pertence a sequencia de Fibonacci.", numero);
    }

    return 0;
}
