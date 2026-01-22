#include <stdio.h>
#include "cadastro.h"
#include "arquivo.h"

struct Usuario usuarios[MAX];
int total = 0;

void cadastrarUsuario() {
    if (total >= MAX) {
        printf("Limite de usuarios atingido.\n");
        return;
    }

    printf("Nome: ");
    scanf(" %[^\n]", usuarios[total].nome);

    printf("Idade: ");
    scanf("%d", &usuarios[total].idade);

    salvarUsuario(usuarios[total]);
    total++;

    printf("Usuario cadastrado com sucesso!\n");
}

void listarUsuarios() {
    if (total == 0) {
        printf("Nenhum usuario cadastrado.\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("%d - %s (%d anos)\n",
               i + 1,
               usuarios[i].nome,
               usuarios[i].idade);
    }
}