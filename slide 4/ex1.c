#include <stdio.h>
#include <math.h>

int eh_primo(long long int n){
    if(n<2){
        return 0;
        }
    if(n==2){
        return 1;
        }
    if(n%2==0){
        return 0;
        }
    long long int limite=sqrt(n);
    for(long long int i=3;i<=limite;i+=2){
        if(n%i==0){
            return 0;
            }
    }
    return 1;
 }

int main(void){
    long long int valor;
    printf("escreva o valor: ");
    scanf("%lld", &valor);
    if(eh_primo(valor)==1){
        printf("primo");
    }else{
        printf("não é um número primo");
    }
 return 0;
}