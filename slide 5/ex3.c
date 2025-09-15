#include <stdio.h>
void compra(int* conta, int valor) {
    *conta -= valor;
}
void main(void) {
    int conta1, conta2;

    int compras[] = { 100, 50, 80, 30, 20 };
    printf("Digite o saldo da conta 1: ");
    scanf("%d", &conta1);
    printf("Digite o saldo da conta 2: ");
    scanf("%d", &conta2);
    for (int i = 0; i < 5; i++) {
        if (conta1 >= conta2) {
            compra(conta1, compras[i]);
        } else {
            compra(conta2, compras[i]);
        }
        printf("Conta 1: %d", conta1);
        printf("Conta 2: %d", conta2);
    }
}