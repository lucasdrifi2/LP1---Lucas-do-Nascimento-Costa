#include <stdio.h>

void main (void) {
    int i;
    int N;
    int valorSomado;
    int somatorio;
    printf("Digite um valor para somar:");
    scanf("%d",&somatorio);
    for (i = 0; i<somatorio ;i++){
  
        valorSomado += (i*i);
    }
    printf("%d",valorSomado);
}

