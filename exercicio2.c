#include <stdio.h>

int main() {
    char senha[100];
    int i = 0, tamanho = 0;

    printf("Digite a sua senha: ");
    scanf("%99s", senha);

    while (senha[i] != '\0') {
        tamanho++;
        i++;
    }

    if (tamanho >= 8) {
        printf("Senha válida! (%d caracteres)\n", tamanho);
    } else {
        printf("Senha muito curta! ", tamanho);
    }

    return 0;
}
