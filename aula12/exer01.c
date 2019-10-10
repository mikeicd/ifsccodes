//Soma de duas matrizes 2x3!!

#include <stdio.h>
#define TAM_MAT 50


void geraMatriz (int aux1[TAM_MAT][TAM_MAT], int x, int y) {
    for (int i = 0; i < x ; i++) {
        for (int j = 0; j < y ; j++) {
            printf("Insira o numero da posição (%d , %d): ",i,j);
            scanf("%d",&aux1[i][j]);
        }
    }
}

void somaMatriz (int aux1[TAM_MAT][TAM_MAT], int aux2[TAM_MAT][TAM_MAT],int aux3[TAM_MAT][TAM_MAT], int x, int y) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            aux3[i][j] = aux1[i][j] + aux2[i][j];
        }
    }
}

float mediaMatriz (int aux1[TAM_MAT][TAM_MAT], int x, int y) {
    int soma=0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            soma = soma + aux1[i][j];
        }
    }
    return (soma/(x*y))/1.0;
}

void leMatriz (int aux1[TAM_MAT][TAM_MAT], int x, int y) {
    for (int i = 0; i < x ; i++) {
        for (int j = 0; j < y ; j++) {
            printf("%d ",aux1[i][j]);
        }
        printf("\n");
    }
}

void main () {
    float media;
    int dimX;
    int dimY;
    int mA[TAM_MAT][TAM_MAT], mB[TAM_MAT][TAM_MAT], mC[TAM_MAT][TAM_MAT];

    printf("Informe num de linhas das matrizes: ");
    scanf("%d",&dimX);
    printf("Informe num de colunas das matrizes: ");
    scanf("%d",&dimY);

    printf("Matriz A\n");
    geraMatriz(mA, dimX, dimY);

    printf("Matriz B\n");
    geraMatriz(mB, dimX, dimY);


    somaMatriz(mA , mB, mC, dimX, dimY);

    printf("Matriz C=A+B\n");
    leMatriz(mC, dimX, dimY);

    media=mediaMatriz(mC, dimX, dimY);
    printf("Média é: %.2f",media);
}