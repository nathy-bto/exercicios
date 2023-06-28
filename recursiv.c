//Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
#include <stdio.h>
int cubo(int n)
    {
     // aqui temos uma função. temos que declarar o tipo da função antes dela. A função recebe como parâmetro a variável n.
    //O tipo de retorno da função é int, ou seja, ela retorna um valor inteiro. 
    if (n == 0)
        return n;
    else
        return ((n*n*n) + cubo(n-1));
    }

int main() {
    int valor = 0; 
    int resultado;
    int n;

    printf("digite um valor para ser calculado a soma dos cubos: ");
    scanf("%d", &valor);
    resultado = cubo(n);

    printf("o resultado da soma dos primeiros %d cubos é: %d", valor, resultado);

return 0;
}