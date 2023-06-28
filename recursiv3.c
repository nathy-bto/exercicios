//Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem crescente.
#include <stdio.h>
int main (){
    int valor;

    void imprima (int n)
    {
        if (n > 0){
            imprima(n-1);
            printf("%d", n);
        else
        {
            printf("0");
        }   
        }
    }
    printf("digite um número para ser realizada a contagem de 0 ate ele: ");
    scanf("%d", valor);

    printf("a ordem crescente de 0 ate %d é: ", valor);
    imprima(valor);
    printf("\n");

return 0;
}