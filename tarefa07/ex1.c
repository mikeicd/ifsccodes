//
// Created by mikei on 11/5/2019.
//

#include <stdio.h>

struct Complexo {
    float real;
    float imag;
}x[2],mA[2][2],mB[2][2],mC[2][2];

struct Complexo somaComplexo(struct Complexo aux[], struct Complexo aux2[]) {
    float somaReal = 0, somaImag = 0;
    for (int j = 0; j < 2; j++) {
        somaReal = somaReal + aux[j].real;
        somaImag = somaImag + aux[j].imag;
    }
    struct Complexo z = {somaReal,somaImag};
    return z;
}

int quadrante(struct Complexo aux) {
    if (aux.real > 0 && aux.imag > 0)
        return 1;
    else if (aux.real < 0 && aux.imag > 0)
        return 2;
    else if (aux.real < 0 && aux.imag < 0)
        return 3;
    else if (aux.real > 0 && aux.imag < 0)
        return 4;
    else if (aux.real != 0 && aux.imag == 0)
        return 5;
    else if (aux.real == 0 && aux.imag != 0)
        return 6;
    else if (aux.real == 0 && aux.imag == 0)
        return 0;
}

void geraMatriz(struct Complexo aux[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Informe o numero complexo da pos (%d,%d).\n",i,j);
            printf("Parte real: ");
            scanf("%f", &aux[i][j].real);
            printf("Parte imaginaria: ");
            scanf("%f", &aux[i][j].imag);
        }
    }
}

void somaMatriz(struct Complexo aux1[2][2], struct Complexo aux2[2][2], struct Complexo aux3[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            aux3[i][j].real = aux1[i][j].real + aux2[i][j].real;
            aux3[i][j].imag = aux1[i][j].imag + aux2[i][j].imag;
        }
    }
}

void leMatriz(struct Complexo aux[2][2]) {
    printf("===============================\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f+%.2fi   ",aux[i][j].real,aux[i][j].imag);
        }
        printf("\n");
    }
    printf("===============================\n");
}

void multComplexo() {
    struct Complexo mult;
    for (int i = 0; i < 2; i++) {
        printf("Informe o numero complexo %d.\n",i + 1);
        printf("Parte real: ");
        scanf("%f", &x[i].real);
        printf("Parte imaginaria: ");
        scanf("%f", &x[i].imag);
    }
    mult.real = x[0].real * x[1].real + ((x[0].imag * x[1].imag)*-1);
    mult.imag = x[0].real * x[1].imag + x[0].imag * x[1].real;
    printf("Multiplicacao: %.2f + %.2fi",mult.real,mult.imag);
}

void cria2Complexo() {
    for (int i = 0; i < 2; i++) {
        printf("Informe o numero complexo %d.\n",i + 1);
        printf("Parte real: ");
        scanf("%f", &x[i].real);
        printf("Parte imaginaria: ");
        scanf("%f", &x[i].imag);
    }
    struct Complexo y = somaComplexo(x,x);
    int quad = quadrante(y);
    printf("A soma dos numeros complexos eh %.2f + %.2fi e esta no quadrante %d.",y.real,y.imag,quad);
}

void main() {
    int escolha=1;
    while (escolha != 0) {

        printf("\n\n");
        printf("===============MENU==============\n");
        printf("1 - Soma 2 numeros complexos\n");
        printf("2 - Mostra o quadrante do complexo\n");
        printf("3 - Soma 2 matrizes de complexos\n");
        printf("4 - Multiplica 2 complexos\n");
        printf("0 - Sair\n");
        printf("==================================\n");
        printf("Escolha --> ");
        scanf("%d", &escolha);
        printf("\n\n");

        switch (escolha) {
            case 1:
                cria2Complexo();
                break;
            case 2:
                printf("Informe o numero complexo.\n");
                printf("Parte real: ");
                scanf("%f", &x[0].real);
                printf("Parte imaginaria: ");
                scanf("%f", &x[0].imag);
                printf("O complexo %.2f + %.2fi esta no quadrante %d.",x[0].real,x[0].imag,quadrante(x[0]));
                break;
            case 3:
                printf("Gerando Matriz A\n");
                geraMatriz(mA);
                printf("Gerando Matriz B\n");
                geraMatriz(mB);
                somaMatriz(mA,mB,mC);
                leMatriz(mC);
                break;
            case 4:
                multComplexo();
                break;
            default:
                printf("Opcao erada...");
        }
    }
}