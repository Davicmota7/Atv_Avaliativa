#include<stdio.h>

int main() {
    int a, b, c, anguloTriangulo;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        
        printf("Digite o angulo")
        scanf("%d", &anguloTriangulo)

        if(anguloTriangulo == 90)
            printf("Retangulo\n");
        else
            if(anguloTriangulo > 90)
                printf("obtusangulo\n");
            else
                printf("Acutangulo\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");}

        