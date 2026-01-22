#include <stdio.h>
#include "arquivo.h"

void salvarUsuario(struct Usuario u) {
    FILE *arquivo = fopen("usuarios.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return;
    }

    fprintf(arquivo, "%s;%d\n", u.nome, u.idade);
    fclose(arquivo);
}

void carregarUsuarios() {
    FILE *arquivo = fopen("usuarios.txt", "r");
    struct Usuario u;

    if (arquivo == NULL)
        return;

    while (fscanf(arquivo, "%49[^;];%d\n", u.nome, &u.idade) == 2) {
        printf("%s (%d anos)\n", u.nome, u.idade);
    }

    fclose(arquivo);
}