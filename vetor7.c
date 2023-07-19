//Faça um programa que receba do usuário um vetor X com 10 posições.
//Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
#include <stdio.h>
int main (){
//declaração de variáveis
int X[3], maior=0, menor=0, valor=0;
//inicião das variáveis
maior=menor=X[0];
//meior e menor elemnto do vetor
for (int i = 0; i < 3; i++)
{
    printf("digite o %d valor: ", i+1);
    scanf("%d", &X[i]);
    if (X[i] > maior)
    {
        maior= X[i];
    }if(X[i] < menor)
    {
        menor= X[i];
    }    
}
    printf("o maior valor é: %d\n", maior);
    printf("o menor valor é: %d\n", menor);

return 0;
}