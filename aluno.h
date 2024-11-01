#ifndef ALUNO_H
#define ALUNO_H
#include "defines.h"

typedef struct alu {
  int matricula;
  char sexo;
  char nome[80];
  char data_nasc[11];
  char cpf[12];
  int ativo;
} Aluno;

int menuAluno();
int cadastrarAluno(Aluno listaAluno[], int qtdAluno);
void listarAluno(Aluno listaAluno[], int qtdAluno);
int atualizarAluno(Aluno listaAluno[], int qtdAluno);
int excluirAluno(Aluno listaAluno[], int qtdAluno);

#endif
