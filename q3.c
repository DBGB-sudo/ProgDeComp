#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void ft_prim(int n) {
    printf("%d = ", n);
    int primeiro = 1;
    for (int i = 2; i <= n; i++) {
        if (eh_primo(i)) {
            while (n % i == 0) {
                if (!primeiro) printf(".");
                printf("%d", i);
                n /= i;
                primeiro = 0;
            }
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    ft_prim(num);
    return 0;
}
