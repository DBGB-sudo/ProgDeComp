#include <stdio.h>

int inverter_numero(int n) {
    int invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    return invertido;
}

void eh_palindromo(int n) {
    if (n == inverter_numero(n))
        printf("%d é palíndromo.\n", n);
    else
        printf("%d não é palíndromo.\n", n);
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    eh_palindromo(numero);

    return 0;
}

