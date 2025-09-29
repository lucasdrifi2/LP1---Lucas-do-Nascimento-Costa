#include <stdio.h>
#include <string.h>

union Identificacao {
    char cpf[12];
    char rg[11];
    char nomeCompleto[100];
};

int main() {
    union Identificacao cidadao_id;

   
    strcpy(cidadao_id.cpf, "12345678900");
    printf("ID (CPF): %s\n", cidadao_id.cpf);
    
   
    strcpy(cidadao_id.nomeCompleto, "Maria da Silva");
    printf("ID (Nome): %s\n", cidadao_id.nomeCompleto);

    
    printf("ID (CPF após nome): %s\n", cidadao_id.cpf); 

    return 0;
}