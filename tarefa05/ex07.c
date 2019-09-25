#include <stdio.h>
#include <math.h>


float complexo (float a, float b) {
    float z;
    z=sqrt(pow(a, 2) + pow(b, 2));
    return z;
}

void main() {

    float real,img;

    printf("Infomar a parte Real: ");
    scanf("%f",&real);

    printf("Infomar a parte Imaginária: ");
    scanf("%f",&img);

    printf("O modulo é: %.2f \n",(complexo(real, img)));
}