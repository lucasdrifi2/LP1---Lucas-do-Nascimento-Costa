## Qual é a diferença entre struct e union. Dê exemplos de uso que identifiquem a necessidade dos dois construtores de tipos.

# Em relação a alocação de memória, a struct e feita de forma separada cada elemento tem seu espaço na memória, ja o union é compartilhada todos na mesma região de memoria.

# Em relação ao tamanho, o struct é a soma de todos os tamanhos dos elementos dentro dele, ja o union é igual ao tamanho do maior elemento.

# Em relação ao acesso dos elementos, no struct é possivel acessar e manipular todos so elementos do simultaneamente, ja o union todo apenas um valor pode ser usado como valor significativo com valor real.

# Em relação ao uso tipico deles, o struct é sada para agrupar dados relacionados que devem existir ao mesmo tempo, já o union Usada quando a variável pode ter diferentes tipos de dados em momentos diferentes, e economizar memória é crucial

## O codigo como exemplo da diferença de uso entre cada um.

 union Valor {
    int inteiro;
    float pontoFlutuante;
    char caractere;
};

struct Item {
    enum { INT, FLOAT, CHAR } tipo;
    union Valor valor;
};

struct Item i1;
i1.tipo = INT;
i1.valor.inteiro = 42;

struct Item i2;
i2.tipo = FLOAT;
i2.valor.pontoFlutuante = 3.1415f;