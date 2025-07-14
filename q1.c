#include <stdio.h>

int sdp(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Soma dos divisores próprios de %d = %d\n", num, sdp(num));
    return 0;
}
