// Lucas Moreira da Silva
#include <stdio.h>

// Define a estrutura "pessoa" com peso, idade e altura
typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

// Função para imprimir os dados de uma pessoa
void imprimePessoa(pessoa p) {
    printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura);
}

// Função para ler os dados de uma pessoa individualmente
void lePessoa(pessoa *p) {
    printf("Digite o peso: ");
    scanf("%lf", &p->peso);
    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    printf("Digite a altura: ");
    scanf("%lf", &p->altura);
}

// Função para ler os dados de todas as pessoas em um array
void lePessoas(pessoa *pessoas, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Pessoa %d:\n", i + 1);
        lePessoa(&pessoas[i]);
    }
}

int main() {
    pessoa pessoas[5];  // Declaração de um array de 5 pessoas

    lePessoas(pessoas, 5);  // Chama a função para ler os dados das 5 pessoas

    // Imprime os dados de todas as pessoas
    for (int i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]);
    }

    return 0;
}
