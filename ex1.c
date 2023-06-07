//Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na tela os valores lidos.
#include <stdio.h>
int main (){
    int valor[6];
    for (int i=1; i<7; i++){
    printf ("digite um valor: \n");
    scanf ("%d", &valor[i]);
    }
    while (int i==7)
    {
        printf("os valores são: %d", valor[i]);
    }
    

return 0;    
}