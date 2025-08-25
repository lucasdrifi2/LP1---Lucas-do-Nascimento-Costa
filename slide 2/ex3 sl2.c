#include <stdio.h>

void main (void) {
    int celular;
    

    printf("Digite o valor para o celular em dolar:");
    scanf("%d", &celular);
    
    int conversao = celular * 3.17;
    printf("O valor que irá pagar é:""%d"" Dólares\n", conversao);

}