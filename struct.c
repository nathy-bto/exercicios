#include <stdio.h>
struct cadastro{
    char nome[30];
    int idade;
    char endereco;
    int main (){
        struct cadastro pessoa1;
        printf("digite seu nome: ");
        fgets(pessoa1.nome, 50);
        printf("digite sua idade: ");
        scanf("%d", pessoa1.idade);
        printf("digite seu endereço: ");
        scanf("%d", pessoa1.endereco);
        

    }

return 0;
}