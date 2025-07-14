#include <stdio.h>

int pos(int x) {
	if(x>0)
		return 1;
	else {
		printf("Numero não valido");
		return 0;
	}

}

int perfeito(int x) {
	int cont=1;
	int soma=0;

	while(x != cont) {
		if(x%cont==0) {
			soma=cont+soma;
			cont++;
		}
		else
			cont++;
	}
	if(x==soma){
		return 1;
	}
	else
		return 0;
}


int intervaloperfeito(int x, int y) {

    printf ("\nNumeros perfeitos no intervalo [%d, %d]:", x, y);

	if(pos(x) == 1 && pos(y) == 1) {
		for(int cont=y; cont<=x; cont++) {
		    if(perfeito(cont)==1){
		        printf("%d, ",cont);
		    }
		}
		
		for(int cont=x; cont<=y; cont++) {
		    if(perfeito(cont)==1){
		        printf("%d, ",cont);
		    }
		}
	}
}


int main() {
	int x,y;

	printf("Escolha o primeiro numero positivo e inteiro:\n");
	scanf("%d", &x);
	printf("Escolha o segundo numero positivo e inteiro:\n");
	scanf("%d", &y);

	intervaloperfeito(x,y);
}
