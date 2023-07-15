//Faça um programa que receba do usuário um vetor X com 10 posições.
//Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
#include <stdio.h>
int main (){
int X[10], maior, menor, valor=0;
for (int i = 0; i < 9; i++)
{
    printf("digite o %d valor: ", i+1);
    scanaf("%d", &X[i]);
    if (X > valor)
    {
        maior= X;
    }else{
        valor= X;
    }
    printf("o maior valor é: ", menor);
    
}

}