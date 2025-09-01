Considere o programa a seguir:

#include <stdio.h>
void main (void) {
    printf("Soma = %d\n", 100-"10");
}

## O que voce espera que aconteça cquando ao compilar o programa? Por quê?

# Do ponto de vista leigo esperasse que apareça 90 como resultado, porém na programação quando voce tenta juntar um valor de string com valor real, (int e char) o programa não executará, no caso, dará erro.

## Quais são os tipos dos operandos na operação de subtração?

# Na função em questão o valor 100 sem as aspas diz respeito a um valor inteiro (int) e o valor "10" diz respeito a uma string(char) 

## Transcreva a mensagem de erro de compilação e a explique.

ex555.c: In function ‘main’:
ex555.c:4:32: error: invalid operands to binary - (have ‘int’ and ‘char *’)
    4 |     printf("Soma = %d\n", 100- "10");
      |    

# Na linha 18 ele diz que tem erro na função main
# na linha 19 a 21 ele diz que deu erro em uma operação para binario, diz que tem uma operação entre Int e Char, e na linhas de baixo mostra onde ta o erro.