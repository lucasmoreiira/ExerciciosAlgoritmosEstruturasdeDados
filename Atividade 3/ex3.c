#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

// Declaração da função calcularResultado, que recebe um array de inteiros v e um inteiro n, e retorna um inteiro
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado;  // Declara um array de 5 inteiros e duas variáveis inteiras: i e resultado

    // Preenche o vetor com múltiplos de 2
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;  // Atribui a cada posição do vetor o valor de i multiplicado por 2
    }

    // Chama a função calcularResultado passando o vetor e o tamanho 5, e armazena o resultado
    resultado = calcularResultado(vetor, 5);

    // Exibe o resultado na tela
    printf("O resultado é: %d\n", resultado);

    return 0;  // Retorna 0, indicando que o programa terminou com sucesso
}

// Define a função calcularResultado, que calcula a soma dos elementos do vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0;  // Declara uma variável para o loop e inicializa a variável soma com 0

    // Percorre o vetor somando seus elementos
    for (i = 0; i < n; i++) {
        soma += v[i];  // Adiciona o valor de v[i] à soma
    }

    return soma;  // Retorna o valor acumulado em soma
}
