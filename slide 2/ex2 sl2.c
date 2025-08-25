#include <stdio.h>


void main (void) {
    int n1;
    int n2;
    printf("Digite o valor para n1");
    scanf("%d", &n1);
    
    printf("Digite o valor para n2");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("%d",n1);
    }
    if (n2>=n1){
        printf("%d",n2);
    }

}