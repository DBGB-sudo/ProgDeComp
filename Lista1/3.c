#include <stdio.h>

int ehprimo(int x){
    
    if(x==0 || x==1)
        return 0;
    
    for(int cont=2;x>cont;cont++){
        if(x%cont==0)
            return 0;
    }
    return 1;
}

int fatprimo(int x){
    printf("\nA fatoração de %d é %d = ",x, x);
    for(int cont=2;x>cont;cont++){
        if(ehprimo(cont)==1){
            if(x%cont==0){
                printf("%d*", cont);
                x=x/cont;
                cont=1;
            }
        }
    }
    printf("%d",x);
}

int main(){
    int x;
    
    scanf("%d", &x);
    fatprimo(x);
}
