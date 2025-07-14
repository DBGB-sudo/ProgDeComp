#include <stdio.h>

int somad(int x){
    int cont=1;
    int soma=0;
    
    if(x==0){
       printf("Zero não é valido");
       return 0;
    }
    
    while(x != cont){
        if(x%cont==0){
            soma=cont+soma;
            cont++;
        }
        else
            cont++;
    }
    printf("\nA soma dos divisores próprios de %d é %d", x, soma);
    return soma;
}

int main(void){
    int x;
    printf("Escolha seu numero:\n");
    scanf("%d", &x);
    
    somad(x);
}
