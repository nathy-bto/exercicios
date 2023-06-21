#include <stdio.h>
int main () {
    int vetor[]= {5, 6, 3, 8, 4};
    int maior = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (vetor[i]< vetor[j]) {
                maior = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = maior;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
       printf("%d ", vetor[i]);
    }
return 0;   
}