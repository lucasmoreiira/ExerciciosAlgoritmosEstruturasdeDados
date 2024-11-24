//Lucas Moreira da Silva
#include <stdio.h>

int somarValores(int vetor[], int n);

int main(){
    
    int soma=0;
    float media=0;
    int n =0;
    
    printf("Quantos numeros deseja inserir:");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("Digite os valores: ");
    
    for(int i=0;i < n;i++){
        scanf("%d", &vetor[i]);
    }
    
    soma = somarValores(vetor,n);
    media = (float)soma/n;
    
    printf("Soma: %d\n", soma);
    printf("Media: %.2f", media);
}

int somarValores(int vetor[],int n ){
    int soma =0;
    for(int i =0;i < n; i++){
        soma+= vetor[i];
    }
    return soma;
}
