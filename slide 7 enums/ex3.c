#include <stdio.h>

enum boolean {
    FALSO = 0,
    VERDADEIRO = 1
};

void verifica_valor(enum boolean b) {
    if (b) {
        printf("O valor e verdadeiro (VERDADEIRO).\n");
    } else {
        printf("O valor e falso (FALSO).\n");
    }
}

int main() {
    enum boolean status_ativo = VERDADEIRO;
    enum boolean status_inativo = FALSO;

    printf("Status Ativo: ");
    verifica_valor(status_ativo); 

    printf("Status Inativo: ");
    verifica_valor(status_inativo); 
    
    printf("Valor 5: ");
    verifica_valor((enum boolean)5); 

    return 0;
}