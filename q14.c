#include <stdio.h>

void potencia(int base, int expoente) {
    if (expoente < 0) {
        printf("Erro: expoente deve ser um inteiro não-negativo.\n");
        return;
    }

    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("%d^%d = %d\n", base, expoente, resultado);
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    potencia(base, expoente);

    return 0;
}

