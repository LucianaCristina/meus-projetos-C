#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float altura;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;
}
