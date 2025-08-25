#include <stdio.h>

void main (void) {
    int soma=1;
    int valorSomado;
    while (soma != 0 ){
        printf("Digite um valor para somar:");
        scanf("%d",&soma);
        valorSomado += soma;
    }
    printf("%d",valorSomado);
}
