//Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N
#include <stdio.h>
int main (){
    int valor=0;
    int resultado;
    int n;

    int somatorio (int n){
        if (n==0){
            return n;
        else
            return n + somatorio(n-1)
        }
    }

    printf("digite um valor para ser somado de 1 ate o número digitado: ");
    scanf("%d", &valor);

    resultado= somatorio(n);
    printf("o resultado da soma de 1 ate %d é %d; ", valor, resultado);

return 0;
}