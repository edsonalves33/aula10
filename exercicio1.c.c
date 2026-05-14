#include<stdio.h>

int main() {

char nome [10];
char disciplina[10];
float notas[3];
float soma = 0;
float media;

    printf("Qual o nome do aluno? ");
    scanf("%s", &nome);

    printf("Qual disciplina? ");
    scanf("%s", &disciplina);

   for(int i = 0; i <3; i++){
        printf("Digite sua nota:");
        scanf("%f", &notas[i]);
        soma+=notas[i];
   }
    media = soma / 3;
    printf("%s , obteve %2.f pontos na media da disciplina %s",nome,media,disciplina);
    return 0;
}