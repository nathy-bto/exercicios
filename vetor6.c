//Escreva um programa que leia do teclado um vetor de 10 posições.
//Escreva na tela quantos valores pares foram armazenados nesse vetor.
#include<stdio.h>
int main (){
    int valores[10], pares=0;
    for (int i = 0; i < 9; i++)
    {
        printf("digite o %d valor: ", i+1);
        scanf("%d", &valores[i]);
        if (valores[i] % 2 == 0)
        {
             pares= pares + 1;
        }
        
    }
    printf("os valores pares são: %d", pares);
return 0;
}