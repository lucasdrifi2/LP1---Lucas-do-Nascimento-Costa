#include <stdio.h>

int tamanho(char* str) {
    int contador = 0;


    while (str[contador] != '\0') {
        contador++;
    }

    return contador; 
}

int main() {
    char minha_string[100];
    printf("Digite um String:");
    scanf("%s", minha_string);

    
    int tam = tamanho(minha_string);

    printf("A string '%s' tem %d caracteres.\n", minha_string, tam);

    return 0;
}


