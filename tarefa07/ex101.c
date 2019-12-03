//
// Created by mikei on 11/3/2019.
//
#include <stdio.h>
#define MAX_ALUNOS 3
#define MAX_NOTAS 3

struct Turma {
    int alunoid;
    char nome[20];
    float nota[MAX_NOTAS];
    float media;
}turma1[MAX_ALUNOS];

void printAluno(int alunoid);

void calculaMedia();

void adicionaAluno(){
    printf("ADICIONANDO\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        if (turma1[i].alunoid != i) {
            turma1[i].alunoid = i;
            printf("Nome: ");
            scanf(" %[^\n]s", turma1[i].nome);
            for (int j = 0; j < MAX_NOTAS; j++) {
                printf("%d Nota: ",j+1);
                scanf("%f", &turma1[i].nota[j]);
            }
            calculaMedia();
            break;
        }
    }
}

void editaAluno(int aux){
    for (int i = 0; i < MAX_ALUNOS; i++) {
        if (aux == turma1[i].alunoid) {
            printf("Aluno encontrado...\n");
            printf("DADOS ATUAIS\n");
            printAluno(turma1[i].alunoid);
            printf("NOVOS DADOS\n");
            printf("Nome: ");
            scanf(" %[^\n]s", turma1[i].nome);
            for (int j = 0; j < MAX_NOTAS; j++) {
                printf("%d Nota: ",j+1);
                scanf("%f", &turma1[i].nota[j]);
            }
        }
        calculaMedia();
        break;
    }
}

void printAluno(int aux) {
    printf("============================\n");
    printf("Nome: %s\n",turma1[aux].nome);
    for (int i = 0; i < MAX_NOTAS; i++) {
        printf("%d Nota: %.2f\n",i+1,turma1[aux].nota[i]);
    }
    printf("============================\n");
}

void calculaMedia(){
    float soma;
    for (int i = 0; i < MAX_ALUNOS; i++) {
        soma = 0;
        for (int j = 0; j < MAX_NOTAS; ++j) {
            soma = soma + turma1[i].nota[j];
        }
        turma1[i].media = (float)soma/MAX_NOTAS;
    }
}

void main() {
    turma1[0].alunoid = 666;
    int idEdita,x=1;
    while (x==1){
        int escolha;
        printf("============================\n");
        printf("MENU\n");
        printf("1 -> Adicionar aluno\n");
        printf("2 -> Editar aluno\n");
        printf("3 -> Mostrar dados do aluno\n");
        printf("4 -> Calcular médias\n");
        printf("0 -> Sair\n");
        printf("Escolha: ");
        scanf("%d",&escolha);
        printf("============================\n");
        switch (escolha) {

            case 1:
                adicionaAluno();
                break;

            case 2:
                printf("Digite o id do aluno: ");
                scanf("%d",&idEdita);
                editaAluno(idEdita);
                break;

            case 3:
                printf("Digite o id do aluno: ");
                scanf("%d",&idEdita);
                printAluno(idEdita);
                break;

            case 4:
                printf("============================\n");
                calculaMedia();
                printf("MÈDIAS\n");
                for (int i = 0; i < MAX_ALUNOS; i++) {
                    printf("%s: %.2f\n",turma1[i].nome,turma1[i].media);
                }
                printf("============================\n");
                break;

            case 0:
                x = 0;
                break;

            default:
                printf("Opção incorreta...");
        }
    }
}
