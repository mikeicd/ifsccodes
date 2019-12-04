#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pont_arq;    // cria variável ponteiro para o arquivo
    char palavra[20];  // variável do tipo string

    //abrindo o arquivo com tipo de abertura w
    pont_arq = fopen("a.txt", "w");  //modo padrão de abertura do arquivo é texto (adicionar b se quiser binário - Ex "rb", "wb", etc)

    //testando se o arquivo foi realmente criado
    if (pont_arq != NULL)
        printf("Arquivo aberto com sucesso, continuando...\n");
    else
        printf("Não foi possível abrir o arquivo\n");

    printf("Escreva uma palavra para testar gravacao de arquivo: ");
    scanf(" %[^\n]s", palavra);  // [^\n] ler espaço como caracter válido

    //escreve no arquivo texto:"2/5/2006"
    fprintf(pont_arq, "%d/%d/%d\n", 2, 5, 2006);

    //usando fprintf para armazenar a string no arquivo
    fprintf(pont_arq, "%s\n", palavra);

    //usando fclose para fechar o arquivo
    fclose(pont_arq);

    printf("Dados gravados com sucesso!\n");

    return 0;
}