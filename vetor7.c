//Faça um programa que receba do usuário um vetor X com 10 posições.
//Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
#include <stdio.h>
int main (){
int X[3], maior=0, menor=0, valor=0;
for (int i = 0; i < 3; i++)
{
    printf("digite o %d valor: ", i+1);
    scanf("%d", &X[i]);
    if (X > valor)
    {
        maior= X;
        valor= X;
    }if(X < valor)
    {
        menor= valor;
        valor=X;
    }    
}
    printf("o maior valor é: %d", maior);
    printf("o maior valor é: %d", valor);

return 0;
}