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
 
void todos_os_primos(long long int max){
    for(long long int j=2;j<=max;j++){
        if(eh_primo(j)){
            printf("%lld ", j);
        }
    }
}

int main(void){
    long long int valor;
    printf("escreva o valor: ");
    scanf("%lld", &valor);
    todos_os_primos(valor);
 return 0;
}