//Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui.
#include <stdio.h>
int main (){
    int mat[4][4];
    int num=0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("digite os valores da matriz: %d, %d ->", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > 10)
            {
                num++;
            }
            
        }
        
    }
    printf("os valores maiores do que 10 são %d", num);
return 0; 
}