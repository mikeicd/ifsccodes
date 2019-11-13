#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    float num1 = atof(argv[1]);
    float num2 = atof(argv[3]);
    switch (*argv[2])
    {
    case '+':
        printf("Soma: %.2f\n", num1 + num2);
        break;
    case '-':
        printf("Subtração: %.2f\n", num1 - num2);
        break;
    default:
        printf("Algo de errado não está certo!");
        break;
    }
}
