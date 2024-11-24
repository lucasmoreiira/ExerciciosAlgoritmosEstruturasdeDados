//Lucas Moreira da Silva
#include <stdio.h>

int exibirMaior(int vetor[], int n);

int main()
{
    int n=0;
    int maior=0;
    
    printf("Digite quantos valores deseja incluir:");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("Digite os valores: ");
    for(int i=0; i< n;i++){
        scanf("%d", &vetor[i]);
    }
    
    maior = exibirMaior(vetor,n);
    
    printf("Maior valor: %d", maior);
    
    for(int i=0; i < n;i++){
        if(vetor[i]== maior){
            printf("\nPosição vetor: %d", i);
        }
    }
    return 0;
}

int exibirMaior(int vetor[],int n){
    int maior=0;
    for(int i=0;i<n;i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

