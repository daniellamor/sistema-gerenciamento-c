#ifndef CADASTRO_H
#define CADASTRO_H

#define MAX 100

struct Usuario {
    char nome[50];
    int idade;
};

void cadastrarUsuario();
void listarUsuarios();

#endif