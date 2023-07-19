//Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida,
//declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0).
#include<stdio.h>
struct ponto{
    int x;
    int y;
};

int ditancia(struct ponto p1, struct ponto p2){
    return sqrt(pow (abs(p1.x)-p2.x)+ (pow (abs(p1.y - p2.y)))); 
}
int main(){
    struct ponto coordenada;
    printf("digite os pontos da coordenada: ");
    scanf("%d %d", (&coordenada.x,&coordenada.y));

    printf("mostrar distancia %d \n ", distancia);


}