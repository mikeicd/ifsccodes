#include <stdio.h>

main() {
    int x[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p;
    int i;

    p = x;

    i = 0;
    while (i < 10) {
        printf(" endereco %p e conteudo %d\n", p, *p);
        p++;
        i++;
    }
}