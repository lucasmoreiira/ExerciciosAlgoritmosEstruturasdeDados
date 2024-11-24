//Lucas Moreira da Silva
#include <stdio.h>    
#include <string.h>    
#include <locale.h>    

// Define a estrutura "Carro" com os campos "modelo", "ano" e "preco"
typedef struct {
    char modelo[50];   
    int ano;          
    double preco;      
} Carro;

// Função para modificar o preço de um carro
// Recebe um ponteiro para "Carro" (c) e um novo preço (novoPreco)
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;  
}

// Função para imprimir os dados de um carro
// Recebe um ponteiro para "Carro" (c) e imprime os campos "modelo", "ano" e "preco"
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);       
    printf("Ano: %d\n", c->ano);               
    printf("Preço: R$ %.2lf\n", c->preco);    
}

int main() {
    setlocale(LC_ALL, "portuguese");  
    
    Carro carrol;  
    
    // Inicializa os campos da estrutura "carrol"
    strcpy(carrol.modelo, "XyZ");     
    carrol.ano = 2020;                
    carrol.preco = 90000.00;          

    printf("Dados antes da modificação:\n");
    imprimirCarro(&carrol);  
    
    modificarPreco(&carrol, 115000.00);  
    
    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carrol); 
    
    return 0;  
}
