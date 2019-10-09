#include <stdio.h>
#define LIN 2
#define COL 3

void main () {
    int mA[LIN][COL]={11,12,13,
                  21,22,23},
        mB[LIN][COL]={1,2,3,
                  1,2,3},
        mC[LIN][COL];

    int soma = 0;
    float media = 0;

    for (int i = 0; i < LIN ; i++) {
        for (int j = 0; j < COL ; j++) {
            mC[i][j] = mA[i][j] + mB[i][j];
            soma = soma + mC[i][j];
        }
    }
    media=(soma/6.0);
    printf("A média é: %.2f\n",media);

}