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
    int mA[TAM_MAT][TAM_MAT];
    float detA,diagPrin,diagSec;

    printf("Informe num de linhas das matrizes: ");
    scanf("%d",&dimX);
    printf("Informe num de colunas das matrizes: ");
    scanf("%d",&dimY);

    printf("Matriz A\n");
    geraMatriz(mA, dimX, dimY);

    leMatriz(mA, dimX, dimY);

//formula para calcular o determinante 3x3
    diagPrin = (mA[0][0]*mA[1][1]*mA[2][2]) + (mA[0][1]*mA[1][2]*mA[2][0]) + (mA[0][2]*mA[1][0]*mA[2][1]);

    diagSec = (mA[2][0]*mA[1][1]*mA[0][2]) + (mA[2][1]*mA[1][2]*mA[0][0]) + (mA[2][2]*mA[1][0]*mA[0][1]);

    detA = diagPrin - diagSec;
    printf("Determinante : %.2f\n",detA);
}