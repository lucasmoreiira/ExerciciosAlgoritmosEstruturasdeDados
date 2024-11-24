//Lucas Moreira da Silva
#include <stdio.h>


void exibirMultiplicacao(int vetor[], int n);

int main(){
    
    int n=0;
    
    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("Digite os valores:");
    
    for(int i=0;i< n;i++){
        scanf("%d", &vetor[i]);
    }
    
    exibirMultiplicacao(vetor,n);
    
    
    return 0;
}

void exibirMultiplicacao(int vetor[], int n){
    int resultado=1;
    for(int i=0;i < n;i++){
        resultado*=vetor[i];
    }
    printf("Resultado: %d", resultado);
}

