#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[])
{
    
    if (argc == 3)
    {
        if (!strcmp(argv[1], argv[2]))
        {
            printf("Os textos são iguais!\n");
        }
        else
        {
            printf("Os textos são diferentes!\n");
        }
    }
    else
    {
        printf("Invalido\n");
    }
}
