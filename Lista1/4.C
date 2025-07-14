#include <stdio.h>

int tamanho(int x){
    int cont=0;
    for(;x>0;cont++){
        x/=10;
    }
    return cont;
}

int posi(int x){
    if(x>0)
        return 1;
    else{
        printf("Numero invalido");
        return 0;
    }
}

int pote10(int x){
    int pote=1;
    for(int cont=0;x!=cont;cont++){
        pote*=10;
    }
    return pote;
}

int palin(int x) {
    int tx = tamanho(x);
    if (posi(x) == 1) {
        while (tx > 1) {

            if (x / pote10(tx - 1) != x % 10)
                break;

            x = x % pote10(tx - 1);
            x = x / 10;

            tx -= 2;
        }

        if (tx <= 1) {
            printf("É palíndromo\n");
            return 1;
        } else {
            printf("Não é palíndromo\n");
            return 0;
        }
    }

    return 0;
}

int main(){
    int x;
    printf("Escolha o numero para verificar se é palindromo:");
    scanf("%d",&x);
    palin(x);

}
