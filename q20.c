#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int possui_apenas_dois_primos_diferentes(int n) {
    int count = 0;

    for (int i = 2; i <= n && count <= 2; i++) {
        if (eh_primo(i) && n % i == 0) {
            count++;
            while (n % i == 0)
                n /= i;
        }
    }

    return (count == 2 && n == 1);
}

void listar_impares_validados(int limite) {
    printf("Números ímpares fatoráveis por dois primos distintos até %d:\n", limite);
    for (int i = 3; i <= limite; i += 2) {
        if (possui_apenas_dois_primos_diferentes(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int limite;
    printf("Digite o limite superior: ");
    scanf("%d", &limite);

    listar_impares_validados(limite);
    return 0;
}

