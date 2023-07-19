//Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo.
//Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo
//e exiba a área e o comprimento da diagonal e o perímetro desse retângulo.
#include <stdio.h>
#include <math.h>
//estrutura do ponto
struct ponto
{
    double x;
    double y;
    double diagonal;
};

//funções
double calculo_diagonal(double x, double y){
    double diagonal = sqrt (pow (x, 2) + pow (y, 2));
    return diagonal;
}

int calculo_perimetro(double x, double y){
    int perimetro = (x*2)+(y*2);
    return perimetro;
}

int calculo_area(int x, int y)
{
    int area = (x*y);
    return area;
}

//entrada dos pontos
int main(){
    int area;
    int perimetro;
    double diagonal;

    struct ponto retangulo;
    printf("digite o ponto superior esquerdo: ");
    scanf("%lf", &retangulo.x);

    printf("digite o ponto inferior direito: ");
    scanf("%lf", &retangulo.y);

    diagonal= calculo_diagonal (retangulo.x, retangulo.y);
    perimetro=calculo_perimetro ((int)retangulo.x, (int)retangulo.y);
    area= calculo_area ((int)retangulo.x, (int)retangulo.y);


    printf("a área do retangulo é: %d", area);
    printf("o perímetro do retangulo é: %d", perimetro);
    printf("a diagonal do retangulo é: %2f", diagonal);


return 0;
}

