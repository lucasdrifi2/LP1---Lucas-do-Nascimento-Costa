#include <stdio.h>
void compra(int* conta, int valor) {
    *conta -= valor;
}
void main(void) {

    int conta1;
    int conta2;
    int preco;
    printf("Saldo da conta 1: ");
    scanf("%d", &conta1);
    printf("Saldo da conta 2: ");
    scanf("%d", &conta2);
    printf("Digite o preço: ");
    scanf("%d", &preco);
    if (conta1 >= conta2) {
        compra(conta1, preco);
    } else {
        compra(conta2, preco);
    }

    printf("Saldo final da conta 1: %d", conta1);
    printf("Saldo final da conta 2: %d", conta2);
}